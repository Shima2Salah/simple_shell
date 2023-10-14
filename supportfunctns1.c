#include "Shell.h"

/**
 * cmd_execution - func excute command entered
 * @cmd_path: char command path
 * @args: tokenized arguments
 * @envp: enviromental variables passed
 */
void cmd_execution(char *cmd_path, char **args, char **envp)
{
int status;
pid_t pid;
int j = 0;
if (_strcmp(args[0], "env") == 0)
{
while (envp[j] != NULL)
{
write(STDOUT_FILENO, envp[j], _strlen(envp[j]));
write(STDOUT_FILENO, "\n", 1);
j++;
}
return;
}
pid = fork();
if (pid < 0)
{
perror("fork");
exit(1);
}
else if (pid == 0)
{
execve(cmd_path, args, envp);
perror("execve");
exit(1);
}
else
{
wait(&status);
}
}
/**
 * signal_handlers - func handle signals
 * @sig: integer signal
 */
void signal_handlers(int sig)
{
(void)sig;
signal(SIGINT, signal_handlers);
write(0, "\n$ ", 3);
}
/**
 * print_dollarsign - func prints $prompt
 *
 */
void print_dollarsign(void)
{
int write_dolarsign;
write_dolarsign = write(1, "$ ", 2);
if (write_dolarsign == -1)
{
perror("write");
exit(-1);
}
}
/**
 * input_command - func recieve user input
 * Return: command entered
 */
char *input_command(void)
{
char *cmdin = NULL;
size_t cmdinlen = 0;
ssize_t lineinput;

lineinput = _getline(&cmdin, &cmdinlen, stdin);
if (lineinput == -1)
{
if (feof(stdin))
{
printf("\n");
exit(0);
}
else
{
perror("getline");
exit(1);
}
}
cmdin[lineinput - 1] = '\0';
return (cmdin);
}
/**
 * file_handling - func handles files
 * @path_file: entered file path
 * Return: integer
 */
int file_handling(char *path_file)
{
ssize_t lineinput = 0;
int fd;
fd = open(path_file, O_RDONLY);
if (fd < 0)
{
perror("open");
exit(1);
}

close(fd);

return (lineinput);
}
