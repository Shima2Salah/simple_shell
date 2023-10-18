# OUR 0x16. C - Simple Shell
Created By Shimaa Salah and Nada Khaled
Project will start Oct 4, 2023 6:00 AM, must end by Oct 19, 2023 6:00 AM

# void changedir_func(char **args)
/**
 * changedir_func - to handle change directories
 * @args: input arguments
  */
# void cd_complmentry_func(char **args)
/**
 * cd_complmentry_func - to support cd function
 * @args: input arguments
  */
# char *_getenv(const char *str)
/**
 * _getenv - to get enviromental variables
 * @str: input string
 * Return: string
*/
# int _setenv(const char *str, const char *new_env, int n)
/**
 * _setenv - to set enviromental variables
 * @str: input string
 * @new_env: input string
 * @n: input integer
 *
 * Return: integer
 */
# int add_env_var(const char *str, const char *new_env)
/**
 * add_env_var - to add enviromental variables
 * @str: input string
 * @new_env: input string
 *
 * Return: integer
 */
# int handle_execute_cmd(char *program, char **args, char **envp, int i, int ret_val)
/**
 * handle_execute_cmd - to handle env & path
 * @program: program entered
 * @args: input arguments
 * @envp: enviromental variables passed
 * @i: count loops
 * @ret_val: return_value
 * Return: integer
 */
# void checkenv_func(char **envp)
/**
 * checkenv_func - to handle set eviroment vars
 * @envp: enviromental variables passed
 */
# void setenv_func(char **args)
/**
 * setenv_func - to handle set eviroment vars
 * @args: input arguments
 */
# void unsetenv_func(char **args)
/**
 * unsetenv_func - to handle unset eviroment vars
 * @args: input arguments
 */
# char *find_cmdpath(char *cmdin)
/**
 * find_cmdpath - find command path
 * @cmdin: command entered
 *
 * Return: charecter path
 */
# void usage_error(char *str)
/**
 * usage_error - handle error usage
 * @str: command entered
 *
 */
# void not_found_error(char *program, char *str, int i)
/**
 * not_found_error - handle error not_found
 * @program: program entered
 * @str: command entered
 * @i: command count
 */
# void exit_cmd(char *cmdin, char **args, int ret_val)
/**
 * exit_cmd - to exit command
 * @cmdin: command entered
 * @args: input arguments
 * @ret_val: return_value
 */
# size_t inc_lineptr(char **lineptr, size_t *n, size_t line_len, char *buff, size_t begining, size_t end)
/**
 * inc_lineptr - func to increase line length
 * @lineptr: pointer to line
 * @n: integer length
 * @line_len: line length
 * @buff: current buffer
 * @begining: start size
 * @end: last size
 * Return: current line length
 */
# ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
/**
 * _getline - func simulate getline function
 * @lineptr: pointer to line
 * @n: integer length
 * @stream: file stream
 * Return: current line length
 */
# void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
/**
 * _realloc - realloc a memory address
 * @ptr: current address
 * @old_size: old size of the address
 * @new_size: new size of the address
 *
 * Return: pointer to the new address
 */
# int main(int argc, char **argv, char **envp)
/**
 * main - my entery point
 * @argc: arguments count
 * @argv: enter arguments
 * @envp: enviromental variables passed
 * Description: function simulate simple shell
 * Return: 0 success
 */
# char *_itoa(int num, char *str, int base)
/**
* _itoa - Converts an integer to a string.
* @num: integer to be converted.
* @str: string saved in.
* @base: integer base.
* Return: integer value.
*/
# int _atoi(char *s)
/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* Return: integer value.
*/
# int _strcmp(char *s1, char *s2)
/**
 * _strcmp - a function that compare
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: integer
 */
# int _strncmp(const char *s1, const char *s2, size_t n)
/**
 * _strncmp - a function that compare strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: string size
 *
 * Return: integer
 */
# int _strlen(char *s)
/**
 * _strlen - functn measure array length
 * @s: my input
 * Description: function calculate arr length
 * Return: length
 */
# char *_strcat(char *dest, char *src)
/**
 * _strcat - a function that concatenates
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: pointer
 */
# char *_strcpy(char *dest, char *src)
/**
 * _strcpy - functn reverse array
 * @dest: my first input
 * @src: second input
 * Description: function reverse array
 * Return: copy of str
 */
# char *_strdup(char *str)
/**
 * _strdup - fundtn creates a new array
 * @str: pointer input
 *
 * Return: pointer of char
 */
# char *_strchr(char *s, char c)
/**
 * _strchr - a function that locates a character in a string
 * @s: first pointer
 * @c: character
 *
 * Return: pointer
 */
# char *_strtok(char *str, char *delim)
/**
 * _strtok - func simulate str tokenizing
 * @str: command entered
 * @delim: that separate arguments
 *
 * Return: tokens arguments
 */
# char *string_copyfunc(char *str, ssize_t linelength)
/**
 * string_copyfunc - func copy str before tokenizing
 * @str: command entered
 * @linelength: int line length
 *
 * Return: copy of string
 */
# char **token_fills(char **args, char *str_cpy)
/**
 * token_fills - func fills token arguments
 * @args: command arguments
 * @str_cpy: char copy of string
 *
 * Return: token arguments
 */
# char **str_tokenizefunc(char *str, ssize_t linelength)
/**
 * str_tokenizefunc - func that support str tokens
 * @str: command entered
 * @linelength: int line length
 *
 * Return: token arguments
 */
# int cmd_execution(char *cmd_path, char **args, char **envp)
/**
 * cmd_execution - func excute command entered
 * @cmd_path: char command path
 * @args: tokenized arguments
 * @envp: enviromental variables passed
 * Return: integer value
 */
# void signal_handlers(int sig)
/**
 * signal_handlers - func handle signals
 * @sig: integer signal
 */
# void print_dollarsign(void)
/**
 * print_dollarsign - func prints $prompt
 *
 */
# char *input_command(int ret_val)
/**
 * input_command - func recieve user input
 * @ret_val: return value
 * Return: command entered
 */
# int file_handling(char *path_file)
/**
 * file_handling - func handles files
 * @path_file: entered file path
 * Return: integer
 */
# int line_remover(char *cmdin)
/**
 * line_remover - func remove lines
 * @cmdin: entered command
 * Return: integer
 */
# void free_arguments(char **args)
/**
* free_arguments - func to free all args.
* @args: token arguments.
*/
# Shell.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define MAX_LINE 80
#define BUFFER_SIZE 1024
extern char **environ;
# List of allowed functions and system calls
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
