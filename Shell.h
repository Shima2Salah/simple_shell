#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define MAX_LINE 80
#define BUFFER_SIZE 1024
void signal_handlers(int sig);
void print_dollarsign(void);
char *input_command(void);
void exit_cmd(char *cmdin, char **args);
char *find_cmdpath(char *input_cmd);
char *_strchr(char *s, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int file_handling(char *path_file);
void usage_error(char *str);
void not_found_error(char *str);
char **str_tokenizefunc(char *str, ssize_t linelength);
char *string_copyfunc(char *str, ssize_t linelength);
char **token_fills(char **args, char *str_cpy);
void cmd_execution(char *cmd_path, char **args, char **envp);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
size_t inc_lineptr(char **lineptr, size_t *n, size_t line_len,
		char *buff, size_t start, size_t end);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_strtok(char *str, char *delim);
int _atoi(char *s);
void free_arguments(char **args);
void free_locatn(char *locatn);
#endif


