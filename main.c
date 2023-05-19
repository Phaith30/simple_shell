#include "shell.h"

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the main function
 *
 * Return: (success) 0 always
 *  (fail) we drop the looser out
 */

int main(int ac, char **av)
{
	ino_t info[] = { INO_INIT };
	int fd = 2;

	fd = fd + 3;

	if (ac == 2)
	{
		fd  = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				puts(av[0]);
				puts(": 0: Can't open ");
				puts(av[1]);
				putchar('\n');
				putchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info -> readfd = fd;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
	return (EXIT_SUCCESS);
