# OUR 0x16. C - Simple Shell
# void changedir_func(char **args)
/**
 * changedir_func - to handle change directories
 * @args: input arguments
  */
# void cd_complmentry_func(char **args)
/**
 * cd_complmentry_func - to support cd function
 * @args: input arguments
  */
# char *_getenv(const char *str)
/**
 * _getenv - to get enviromental variables
 * @str: input string
 * Return: string
*/
# int _setenv(const char *str, const char *new_env, int n)
/**
 * _setenv - to set enviromental variables
 * @str: input string
 * @new_env: input string
 * @n: input integer
 *
 * Return: integer
 */
# int add_env_var(const char *str, const char *new_env)
/**
 * add_env_var - to add enviromental variables
 * @str: input string
 * @new_env: input string
 *
 * Return: integer
 */
# int handle_execute_cmd(char *program, char **args, char **envp, int i, int ret_val)
/**
 * handle_execute_cmd - to handle env & path
 * @program: program entered
 * @args: input arguments
 * @envp: enviromental variables passed
 * @i: count loops
 * @ret_val: return_value
 * Return: integer
 */
# void checkenv_func(char **envp)
/**
 * checkenv_func - to handle set eviroment vars
 * @envp: enviromental variables passed
 */
# void setenv_func(char **args)
/**
 * setenv_func - to handle set eviroment vars
 * @args: input arguments
 */
# void unsetenv_func(char **args)
/**
 * unsetenv_func - to handle unset eviroment vars
 * @args: input arguments
 */
# char *find_cmdpath(char *cmdin)
/**
 * find_cmdpath - find command path
 * @cmdin: command entered
 *
 * Return: charecter path
 */
# void usage_error(char *str)
/**
 * usage_error - handle error usage
 * @str: command entered
 *
 */
# void not_found_error(char *program, char *str, int i)
/**
 * not_found_error - handle error not_found
 * @program: program entered
 * @str: command entered
 * @i: command count
 */
# void exit_cmd(char *cmdin, char **args, int ret_val)
/**
 * exit_cmd - to exit command
 * @cmdin: command entered
 * @args: input arguments
 * @ret_val: return_value
 */
# size_t inc_lineptr(char **lineptr, size_t *n, size_t line_len, char *buff, size_t begining, size_t end)
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
# ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
/**
 * _getline - func simulate getline function
 * @lineptr: pointer to line
 * @n: integer length
 * @stream: file stream
 * Return: current line length
 */
# void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
/**
 * _realloc - realloc a memory address
 * @ptr: current address
 * @old_size: old size of the address
 * @new_size: new size of the address
 *
 * Return: pointer to the new address
 */
# int main(int argc, char **argv, char **envp)
/**
 * main - my entery point
 * @argc: arguments count
 * @argv: enter arguments
 * @envp: enviromental variables passed
 * Description: function simulate simple shell
 * Return: 0 success
 */
# char *_itoa(int num, char *str, int base)
/**
* _itoa - Converts an integer to a string.
* @num: integer to be converted.
* @str: string saved in.
* @base: integer base.
* Return: integer value.
*/
# int _atoi(char *s)
/**
* _atoi - Converts a string to an integer.
* @s: string to be converted.
* Return: integer value.
*/
# int _strcmp(char *s1, char *s2)
/**
 * _strcmp - a function that compare
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: integer
 */
# int _strncmp(const char *s1, const char *s2, size_t n)
/**
 * _strncmp - a function that compare strings
 * @s1: first pointer
 * @s2: second pointer
 * @n: string size
 *
 * Return: integer
 */

