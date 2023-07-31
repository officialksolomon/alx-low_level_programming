#include "main.h"

/**
 * _memcpy -  copy a block of memory from a source
 * location to a destination location. 
 * @dest: Pointer to char params.
 * @src: Pointer to char params.
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
