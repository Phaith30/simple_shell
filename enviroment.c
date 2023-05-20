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
		write(STDIN_FILENO, "\n" , 1);
		s = *(environ + i);
	}
}
