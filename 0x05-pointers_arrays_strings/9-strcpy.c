#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0(Null character).
 *@src: Source pointer.
 *@dest: Destination pointer.
 *Return: the pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
