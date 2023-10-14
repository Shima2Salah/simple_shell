#include "Shell.h"
/**
* free_arguments - func to free all args.
* @args: token arguments.
*/
void free_arguments(char **args)
{
int i;
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
int i, j;

for (i = 0; s1[i] != '\0'; i++)
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

