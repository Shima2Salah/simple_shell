#include "Shell.h"
/**
 * handle_execute_cmd - to handle env & path
 * @cmdin: command entered
 * @args: input arguments
 * @envp: enviromental variables passed
 */
void handle_execute_cmd(char **args, char **envp)
{
char *cmd_path = NULL;
if (strcmp(args[0], "setenv") == 0)
{
setenv_func(args);
}
else if (strcmp(args[0], "unsetenv") == 0)
{
unsetenv_func(args);
}
else if (strcmp(args[0], "cd") == 0)
{
changedir_func(args);
}
else
{
cmd_path = find_cmdpath(args[0]);
if (cmd_path == NULL)
{
perror(args[0]);
return;
}
cmd_execution(cmd_path, args, envp);
free(cmd_path);
}
}
/**
 * setenv_func - to handle set eviroment vars
 * @args: input arguments
 */
void setenv_func(char **args)
{
if (args[1] == NULL || args[2] == NULL)
{
ssize_t n;
char *enverr = "setenv: missing arguments\n";
n = write(STDERR_FILENO, enverr, strlen(enverr));
if (n < 0)
{
perror("write");
exit(EXIT_FAILURE);
}
return;
}
if (setenv(args[1], args[2], 1) != 0)
{
perror("setenv");
}
}
/**
 * unsetenv_func - to handle unset eviroment vars
 * @args: input arguments
 */
void unsetenv_func(char **args)
{
if (args[1] == NULL)
{
ssize_t n;
char *enverr = "unsetenv: missing arguments\n";
n = write(STDERR_FILENO, enverr, strlen(enverr));
if (n < 0)
{
perror("write");
exit(EXIT_FAILURE);
}
return;
}
if (unsetenv(args[1]) != 0)
{
perror("unsetenv");
}
}
/**
 * find_cmdpath - find command path
 * @cmdin: command entered
 *
 * Return: charecter path
 */
char *find_cmdpath(char *cmdin)
{
char *command_path, *cmdpath_copy, *dir_name, *locatn;
struct stat buffer;
if (_strchr(cmdin, '/') != NULL)
{
cmdpath_copy = _strdup(cmdin);
return (cmdpath_copy);
}
command_path = getenv("PATH");
if (command_path)
{
cmdpath_copy = _strdup(command_path);
dir_name = strtok(cmdpath_copy, ":");
while (dir_name != NULL)
{
locatn = malloc(_strlen(dir_name) + _strlen(cmdin) + 2);
if (locatn == NULL)
{
perror("tsh: memory allocation error");
return (NULL);
}
_strcpy(locatn, dir_name);
_strcat(locatn, "/");
_strcat(locatn, cmdin);
strcat(locatn, "\0");
if (stat(locatn, &buffer) == 0)
{
free(cmdpath_copy);
return (locatn);
}
free(locatn);
dir_name = strtok(NULL, ":");
}
free(cmdpath_copy);
return (NULL);
}
return (NULL);
}


