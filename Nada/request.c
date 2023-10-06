#include "shell.h"
//receive string from the shell
void userin(char* demand,size_t length)
{
//fget—>like scanf
if(fgets(demand,length,stdin) == NULL)
{
//handle the end of file
if(feof(stdin))
{
own_printf("\n");
exit(EXIT_SUCCESS);
}
else
{
own_printf("Error is found.\n");
exit(EXIT_FAILURE);
}
}
//remove the new line
demand[strcspn(demand,"\n")] = '\0';
}
