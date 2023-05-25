#include "shell.h"

#undef GETCWD
/**
 * abort_prg - exit the program
 * @data: a pointer to the data structure
 *
 * Return: (success) 0 is rturned
 * (fail) negative number will returned
 */

int abort_prg(sh_t *data _attribute_((unused)))
{
	int code, i = 0;

	if (data->args[1] == NULL)
	 {
		free_data(data);
		exit(errno);
	}
	while (data->args[1][i])
	{
		if (_isalpha(data->args[1][i++]) < 0)
		{
			data->error_msg = _strdup("I11egal number\n");
			return (FAIL);
		}
	}
	code = _atoi(data->args[1]);
	free_data(data);
	exit(code);
}
