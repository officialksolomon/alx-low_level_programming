#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Prints the alphabet for a-z
 * Return: 0
 */
int main(void)
{
    char character = 'a';

    while (character <= 'z')
    {
        putchar(character);
        character++;
    }

    putchar('\n');
    return (0);
}
