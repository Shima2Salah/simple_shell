#include "shell.h"
/**
*Own_strlen-function that returns the length of a string
*@string: the string size to check
* Return: integer length of string
*/
int Own_strlen(char *string)
{
int index = 0;
if (!string)
{
return (0);
}
while (*string++)
{
index++;
}
return (index);
}
/**
*Own_strcmp-make comparison of two strings.
*@string1: 1st string
*@string2: 2nd string
*Return:-1 or 1 
*/
int Own_strcmp(char *string1, char *string2)
{
while (*string1 && *string2)
{
if (*string1 != *string2)
{
return (*string1 - *string2);
}
string1++;
string2++;
}
if (*string1 == *string2)
{
return (0);
}
else
{
return (*string1 < *string2 ? -1 : 1);
}
}
