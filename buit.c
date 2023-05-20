#include "shell.h"

/**
 * _myhelp - changes the current directory of the process
 * @info: Structure containing potential arguments .
 *   constant function prototype
 *
 *   Return: always 0
 */

int _myhelp(info_t *info)

{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works, fuction not yet implemented \n');
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */)
	return (0);
