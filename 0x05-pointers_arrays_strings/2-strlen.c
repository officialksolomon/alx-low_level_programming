#include "main.h"

/**
 * _strlen - returns length of a given string
 * @s: string to count
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
