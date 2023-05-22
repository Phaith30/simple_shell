#include "shell.h"

/**
 * _env - prints the environment variables
 * @com: commands
 */

void _env(char **com)

{
	int i;
	char *j = *environ;

	if (com[1] != NULL)
		return;
	for (i = 0; j; i++)
	{
		write(STDIN_FILENO, S, _strlen(s));
		write(STDIN_FILENO, "\n", 1);
		s = *(environ + i);
	}
}

/**
 * _myenv - prints the current environment
 * @info: Structure containing potential arguments
 * to maintain constant function prototype
 * Return: Always 0
 */
int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * _mysetenv - initialize a new environment variable,
 *  or modify an existing one 
 *  @info: Structure containing potential arguments used to maintain
 *     constant function prototype
 * Return: Always 0
 */
int _mysetenv(info_t *info)
{
	if(info->argc != 3)
	{
		_eputs("Incorrect number of arguments\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2])0
		return (0);
	returrn (1);
}
