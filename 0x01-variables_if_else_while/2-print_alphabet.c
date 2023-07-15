#include <stdio.h>

/**
 * main - Prints alphabet in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
