#ifndef SHELL_H
#define SHELL_H
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#define BUFFER 1024
#define INFO \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}
void displayPrompt(void);
void own_printf(char* request);
void userin(char *demand,size_t length);
void executeDemand(const char* demand);
int STIatoi(char *s);
int structMode(inf_t *inf);
int alphabetic(int c);
int character(char c, char *stringOfDelim);

#endif
