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

