#include "Shell.h"
/**
 * usage_error - handle error usage
 * @str: command entered
 *
 */
void usage_error(char *str)
{
perror(str);
write(STDERR_FILENO, ": Usage: ", 10);
write(STDERR_FILENO, str, _strlen(str));
write(STDERR_FILENO, " [file]\n", 9);
}
/**
 * not_found_error - handle error usage
 * @str: command entered
 *
 */
void not_found_error(char *str)
{
perror(str);
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, str, _strlen(str));
write(STDERR_FILENO, ": command not found\n", 20);
}
/**
 * exit_cmd - to exit command
 * @cmdin: command entered
 * @args: input arguments
 */
void exit_cmd(char *cmdin, char **args)
{
int exit_status;
if (_strcmp(args[0], "exit") == 0)
{
if (args[1] != NULL)
{
exit_status = _atoi(args[1]);
free_arguments(args);
free(cmdin);
exit(exit_status);
}
else
{
free_arguments(args);
free(cmdin);
exit(0);
}
}
}
