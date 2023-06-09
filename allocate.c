#include "shell.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @num: Number of elements.
 * @size: Bytes of elements.
 * Return: returns a pointer to the allocated memory
 * The memory is set to zero
 * If num or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int num, unsigned int size)
{
	int i, range;
	char *ch;
	void *p = NULL;

	range = num * size;
	if (range == 0)
		return (NULL);
	p = malloc(range);
	if (p != NULL)
	{
		ch = (char *)p;
		for (i = 0; i < range; i++)
			ch[i] = 0;
		return (p);
	}
	else
	{
		return (p);
	}
}
