#include<stdio.h>
#include "Shell.h"
/**
 * main - my entery point
 * @argc: arguments count
 * @argv: enter arguments
 * @envp: enviromental variables passed
 * Description: function simulate simple shell
 * Return: 0 success
 */
int main(int argc, char **argv, char **envp)
{
char **args = NULL;
char *cmdin = NULL;

signal(SIGINT, signal_handlers);
if (argc < 1)
{
usage_error(argv[0]);
exit(1);
}
if (argc == 1)
{
while (1)
{
if (isatty(STDIN_FILENO))
print_dollarsign();
cmdin = input_command();
if (line_remover(cmdin))
continue;
args = str_tokenizefunc(cmdin, _strlen(cmdin) + 1);
if (args == NULL)
{
free (cmdin);
continue;
}
exit_cmd(cmdin, args);
handle_execute_cmd(args, envp);
free_arguments(args);
free(cmdin);
}
}
return (0);
}

