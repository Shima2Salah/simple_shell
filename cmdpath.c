#include "Shell.h"
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

