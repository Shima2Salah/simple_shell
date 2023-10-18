#include "Shell.h"
/**
 * changedir_func - to handle change directories
 * @args: input arguments
 */
void changedir_func(char **args)
{
char currentdir[BUFFER_SIZE];
char *cd_result;
cd_result = getcwd(currentdir, sizeof(currentdir));
if (cd_result == NULL)
{
perror("getcwd");
exit(EXIT_FAILURE);
}
setenv("OLDPWD", currentdir, 1);
cd_complmentry_func(args);
cd_result = getcwd(currentdir, sizeof(currentdir));
if (cd_result == NULL)
{
perror("getcwd");
exit(EXIT_FAILURE);
}
setenv("PWD", currentdir, 1);
}
/**
 * cd_complmentry_func - to support cd function
 * @args: input arguments
 */
void cd_complmentry_func(char **args)
{
char *home, *old_pwd;
int k = 0;
if (args[1] == NULL || strcmp(args[1], "~") == 0)
{
home = getenv("HOME");
if (home == NULL)
{
write(STDERR_FILENO, "tsh: HOME environment variable not set\n", 39);
exit(EXIT_FAILURE);
}
k = chdir(home);
}
else if (strcmp(args[1], "-") == 0)
{
old_pwd = getenv("OLDPWD");
if (old_pwd == NULL)
{
write(STDERR_FILENO, "tsh: OLDPWD environment variable not set\n", 40);
exit(EXIT_FAILURE);
}
k = chdir(old_pwd);
}
else
{
k = chdir(args[1]);
}
if (k == -1)
{
perror("chdir");
exit(EXIT_FAILURE);
}
}
/**
 * _getenv - to get enviromental variables
 * @str: input string
 *
 * Return: string
 */
char *_getenv(const char *str)
{
int i = 0;
int len;
len = strlen(str);
while (environ[i] != NULL)
{
if (strncmp(environ[i], str, len) == 0 && environ[i][len] == '=')
{
return (&environ[i][len + 1]);
}
i++;
}
return (NULL);
}
/**
 * _setenv - to set enviromental variables
 * @str: input string
 * @new_env: input string
 * @n: input integer
 *
 * Return: integer
 */
int _setenv(const char *str, const char *new_env, int n)
{
int i, j;
int len;
char *s;
if (!str || !new_env)
{
perror("tsh: NULL parameter error");
return (-1);
}
len = strlen(str) + 1;
for (i = 0; environ && environ[i]; i++)
{
if (_strncmp(environ[i], str, len) == 0 && environ[i][len] == '=')
{
if (!n)
{
return (0);
}
s = realloc(environ[i], strlen(new_env) + len + 2);
if (!s)
{
perror("tsh: memory allocation error");
return (-1);
}
strcpy(s, str);
strcat(s, "=");
strcat(s, new_env);
free(environ[i]);
environ[i] = s;
return (0);
}
}
j = add_env_var(str, new_env);
return (j);
}
/**
 * add_env_var - to add enviromental variables
 * @str: input string
 * @new_env: input string
 *
 * Return: integer
 */
int add_env_var(const char *str, const char *new_env)
{
int i;
char *s;
int len;
if (!str || !new_env)
{
perror("tsh: NULL parameter error");
return (-1);
}
len = strlen(str);
for (i = 0; environ && environ[i]; i++)
;
environ = realloc(environ, sizeof(char *) * (i + 2));
if (!environ)
{
perror("tsh: memory allocation error");
return (-1);
}
s = malloc(strlen(new_env) + len + 2);
if (!s)
{
perror("tsh: memory allocation error");
return (-1);
}
strcpy(s, str);
strcat(s, "=");
strcat(s, new_env);
environ[i] = s;
environ[i + 1] = NULL;
return (0);
}

