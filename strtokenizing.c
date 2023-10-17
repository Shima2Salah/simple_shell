#include "Shell.h"
/**
 * _strtok - func simulate str tokenizing
 * @str: command entered
 * @delim: that separate arguments
 *
 * Return: tokens arguments
 */
char *_strtok(char *str, char *delim)
{
static char *ptr;
char *strings;
int i, j;

if (str == NULL)
str = ptr;
if (ptr == NULL && str == NULL)
return (NULL);
for (i = 0; *str != '\0' && _strchr(delim, *str) != NULL; i++)
str++;
if (*str == '\0')
{
ptr = NULL;
return (NULL);
}
strings = str;
for (j = 0; *str != '\0' && _strchr(delim, *str) == NULL; j++)
str++;
if (*str != '\0')
{
*str = '\0';
ptr = ++str;
}
else
{
ptr = NULL;
}
return (strings);
}
/**
 * string_copyfunc - func copy str before tokenizing
 * @str: command entered
 * @linelength: int line length
 *
 * Return: copy of string
 */
char *string_copyfunc(char *str, ssize_t linelength)
{
char *str_cpy = NULL;
str_cpy = malloc(sizeof(char) * (linelength + 1));
if (str_cpy == NULL)
{
perror("tsh: memory allocation error");
return (NULL);
}
strcpy(str_cpy, str);
return (str_cpy);
}
/**
 * token_fills - func fills token arguments
 * @args: command arguments
 * @str_cpy: char copy of string
 *
 * Return: token arguments
 */
char **token_fills(char **args, char *str_cpy)
{
char *str_token;
int j, k;
str_token = strtok(str_cpy, " \t\n");
for (j = 0; str_token != NULL; j++)
{
args[j] = malloc(sizeof(char) * (_strlen(str_token) + 1));
if (args[j] == NULL)
{
perror("tsh: memory allocation error");
for (k = 0; k < j; k++)
{
free(args[k]);
}
free(args);
return (NULL);
}
strcpy(args[j], str_token);
str_token = strtok(NULL, " \t\n");
}
return (args);
}
/**
 * str_tokenizefunc - func that support str tokens
 * @str: command entered
 * @linelength: int line length
 *
 * Return: token arguments
 */
char **str_tokenizefunc(char *str, ssize_t linelength)
{
char **args;
char *str_cpy = NULL;
char *str_token;
int i = 0;
if (str)
{
str_cpy = string_copyfunc(str, (linelength + 1));
if (str_cpy == NULL)
{
free(str_cpy);
return (NULL);
}
str_token = strtok(str, " \t\n");
while (str_token != NULL)
{
i++;
str_token = strtok(NULL, " \t\n");
}
i++;
args = malloc(sizeof(char *) * i);
if (args == NULL)
{
perror("tsh: memory allocation error");
free(str_cpy);
return (NULL);
}
args = token_fills(args, str_cpy);
if (args == NULL)
{
free(str_cpy);
return (NULL);
}
args[i - 1] = NULL;
free(str_cpy);
return (args);
}
return (NULL);
}
