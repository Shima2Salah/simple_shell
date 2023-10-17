#include "Shell.h"
/**
 * usage_error - handle error usage
 * @str: command entered
 *
 */
void usage_error(char *str)
{
ssize_t k, l, m;
perror(str);
k = write(STDERR_FILENO, ": Usage: ", 10);
l = write(STDERR_FILENO, str, _strlen(str));
m = write(STDERR_FILENO, " [file]\n", 9);
if (k < 0 || l < 0 || m < 0)
{
perror("write");
exit(EXIT_FAILURE);
}
}
/**
 * not_found_error - handle error usage
 * @str: command entered
 *
 */
void not_found_error(char *str)
{
ssize_t k, l, m;
perror(str);
k = write(STDERR_FILENO, ": ", 2);
l = write(STDERR_FILENO, str, _strlen(str));
m = write(STDERR_FILENO, ": command not found\n", 20);
if (k < 0 || l < 0 || m < 0)
{
perror("write");
exit(EXIT_FAILURE);
}
}
/**
 * exit_cmd - to exit command
 * @cmdin: command entered
 * @args: input arguments
 */
void exit_cmd(char *cmdin, char **args)
{
int exit_status;
if (strcmp(args[0], "exit") == 0)
{
if (args[1] != NULL)
{
exit_status = atoi(args[1]);
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
