#include "main.h"

/**
 * puts_half - Prints/output the 2nd half of a string.
 * @*str: string pointer.
 */

void puts_half(char *str)
{
	int length, n, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
