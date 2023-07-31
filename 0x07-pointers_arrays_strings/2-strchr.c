#include "main.h"

/**
 * _strchr - Prints c if  found.
 * @s: Pointer to char>.
 * @c: char parameter to find.
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
