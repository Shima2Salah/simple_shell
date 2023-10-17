#include "Shell.h"
/**
 * line_remover - func remove lines
 * @cmdin: entered command
 * Return: integer
 */
int line_remover(char *cmdin)
{
int i, j = 0, k = 0;
while (cmdin[j])
{
if (cmdin[j] == ' ' || cmdin[j] == '\n')
k++;
else
break;
j++;
}
i = _strcmp((cmdin + k), "\n");
if (!cmdin[k] || !i)
{
free(cmdin);
return (1);
}
_strcpy(cmdin, cmdin + k);
return (0);
}
/**
* free_arguments - func to free all args.
* @args: token arguments.
*/
void free_arguments(char **args)
{
int i;
if (args == NULL)
return;
for (i = 0; args[i] != NULL; i++)
{
free(args[i]);
}
free(args);
}
