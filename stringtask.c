#include "shell.h"

/**
 * _strcpy - copies a string
 * @dest : for destination
 * @src: for source
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src);

{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the given string
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str);

{
	char *dup1;

	if (str == Null)
		return (NULL);
	dup1 = malloc(_strlen(str) + 1);
	if (dup1 == NULL)
		return (NULL);
	_strcpy(dup1, str);
	return (dup1);
}
