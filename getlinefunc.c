#include "Shell.h"
/**
 * inc_lineptr - func to increase line length
 * @lineptr: pointer to line
 * @n: integer length
 * @line_len: line length
 * @buff: current buffer
 * @begining: start size
 * @end: last size
 * Return: current line length
 */
size_t inc_lineptr(char **lineptr, size_t *n, size_t line_len,
		char *buff, size_t begining, size_t end)
{
size_t i;
size_t len = end - begining;
if (*lineptr == NULL || *n < line_len + len)
{
*n = line_len + len;
*lineptr = _realloc(*lineptr, line_len, *n);
if (*lineptr == NULL)
{
exit(-1);
}
}
for (i = 0; i < len; i++)
{
(*lineptr)[line_len + i] = buff[begining + i];
}
line_len += len;
return (line_len);
}
/**
 * _getline - func simulate getline function
 * @lineptr: pointer to line
 * @n: integer length
 * @stream: file stream
 * Return: current line length
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
char buff[BUFFER_SIZE];
ssize_t inc_buf = 0;
ssize_t enter_chars = 0;
size_t line_len = 0;
ssize_t i;
while (1)
{
if (inc_buf >= enter_chars)
{
enter_chars = read(fileno(stream), buff, BUFFER_SIZE);
if (enter_chars <= 0)
{
return (enter_chars);
}
inc_buf = 0;
}
for (i = inc_buf; i < enter_chars; i++)
{
if (buff[i] == '\n')
{
break;
}
}
line_len = inc_lineptr(lineptr, n, line_len, buff, inc_buf, i + 1);
if (line_len != 0)
(*lineptr)[line_len - 1] = '\0';
inc_buf = i + 1;
if (buff[i] == '\n')
{
return (line_len);
}
}
}
/**
 * _realloc - realloc a memory address
 * @ptr: current address
 * @old_size: old size of the address
 * @new_size: new size of the address
 *
 * Return: pointer to the new address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < old_size; i++)
*((char *)ptr + i) = *((char *)new_ptr + i);
free(ptr);
return (new_ptr);
}
