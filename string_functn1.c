#include "Shell.h"
/**
 * _strlen - functn measure array length
 * @s: my input
 * Description: function calculate arr length
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
/**
 * _strcat - a function that concatenates
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
int i;
int j = 0;
char *temp;

for (i = 0; dest[i] != '\0'; i++)
;
while (src[j] != '\0')
{
dest[i++] = src[j++];
}
if (src[j] == '\0')
dest[i] = src[j];
temp = dest;
return (temp);
}
/**
 * _strcpy - functn reverse array
 * @dest: my first input
 * @src: second input
 * Description: function reverse array
 * Return: copy of str
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * _strdup - fundtn creates a new array
 * @str: pointer input
 *
 * Return: pointer of char
 */

char *_strdup(char *str)
{
int i, j;
char *ptr;

if (str == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{
;
}
j++;
ptr = malloc(j);

if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < j; i++)
{
ptr[i] = str[i];
}
return (ptr);
free(ptr);
}
/**
 * _strchr - a function that locates a character in a string
 * @s: first pointer
 * @c: character
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
