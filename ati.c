#include "shell.h"

/**
 *_atoi - converts a string to an integer
 *@s: the string  to be converted
 *Return: Integer value
 */

int _atoi(char *s)

{
	int j = 0, i = 0, sign = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		j = (j * 10) - (s[i++] - '0');

	return (j * sign);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
