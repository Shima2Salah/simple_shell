#include "Shell.h"
/**
* _itoa - Converts an integer to a string.
* @num: integer to be converted.
* @str: string saved in.
* @base: integer base.
* Return: integer value.
*/
char *_itoa(int num, char *str, int base)
{
int i = 0, neg = 0, j = 0, k, result;
char temp;
if (num == 0)
{
str[i] = '0';
str[++i] = '\0';
return (str);
}
if (num < 0 && base == 10)
{
neg = 1;
num = num * (-1);
}
while (num != 0)
{
result = num % base;
if (result > 9)
str[i] = (result - 10) + 'a';
else
str[i] = result + '0';
i++;
num = num / base;
}
if (neg)
str[i++] = '-';
str[i] = '\0';
k = i - 1;
while (j < k)
{
temp = str[j];
str[j] = str[k];
str[k] = temp;
k--;
j++;
}
return (str);
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

