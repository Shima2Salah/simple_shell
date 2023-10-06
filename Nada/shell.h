#ifndef SHELL_H
#define SHELL_H
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
void displayPrompt(void);
void own_printf(char* request);
void userin(char *demand,size_t length);
void executeDemand(const char* demand);
#endif
