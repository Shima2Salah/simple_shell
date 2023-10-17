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
i =_strcmp((cmdin + k), "\n");
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
/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* Return: integer value.
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int mul = 1, num = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9' && !(*(s + 1) >= '0' && *(s + 1) <= '9'))
{
s++;
break;
}
s++;
}
s--;
while (*s >= '0' && *s <= '9')
{
num += (*s - '0') * mul;
mul *= 10;
s--;
}
sign *= num;
return (sign);
}

/**
 * _strcmp - a function that compare
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int i, j = 0;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
j = s1[i] - s2[i];
break;
}
else
{
j = 0;
}
}
return (j);
}
/**
 * _strncmp - a function that compare strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: string size
 *
 * Return: integer
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
size_t k = 0;
int j;
while (k < n)
{
if (s1[k] != s2[k])
{
j = s1[k] - s2[k];
return (j);
}
else if (s1[k] == '\0')
{
return (0);
}
k++;
}
return (0);
}

