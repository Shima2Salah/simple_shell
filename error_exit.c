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
 * not_found_error - handle error not_found
 * @program: program entered
 * @str: command entered
 * @i: command count
 */
void not_found_error(char *program, char *str, int i)
{
ssize_t j, k, l, m, n, o;
char str_i[12];
_itoa(i, str_i, 10);
j = write(STDERR_FILENO, program, _strlen(program));
k = write(STDERR_FILENO, ": ", 2);
l = write(STDERR_FILENO, str_i, strlen(str_i));
m = write(STDERR_FILENO, ": ", 2);
n = write(STDERR_FILENO, str, _strlen(str));
o = write(STDERR_FILENO, ": not found\n", 12);
if (j < 0 || k < 0 || l < 0 || m < 0 || n < 0 || o < 0)
{
perror("write");
exit(127);
}
}
/**
 * exit_cmd - to exit command
 * @cmdin: command entered
 * @args: input arguments
 * @ret_val: return_value
 */
void exit_cmd(char *cmdin, char **args, int ret_val)
{
int i, n = 1;
if (strcmp(args[0], "exit") == 0)
{
if (args[1] != NULL)
{
for (i = 0; args[1][i] != '\0'; i++)
{
if (args[1][i] < '0' || args[1][i] > '9')
{
n = 0;
break;
}
}
if (!n)
{
write(STDERR_FILENO, "./hsh: 1: exit: Illegal number: ", 32);
write(STDERR_FILENO, args[1], strlen(args[1]));
write(STDERR_FILENO, "\n", 1);
free_arguments(args);
free(cmdin);
if (!isatty(STDIN_FILENO))
exit(2);
else
return;
}
ret_val = atoi(args[1]);
free_arguments(args);
free(cmdin);
exit(ret_val);
}
else
{
free_arguments(args);
free(cmdin);
exit(ret_val);
}
}
}

