#include <stdio.h>

/**
 * main - Prints alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: 0 for successful execution and non-zero otherwise.
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character != 'e' && character != 'q')
		{
			putchar(ch);
		}
		character++;
	}
	putchar('\n');
	return (0);
}
