#include "shell.h"

void own_printf(const char *request)
{
write(STDOUT_FILENO,request,strlen(request));
//write(1,&request,strlen(request)); 
}
