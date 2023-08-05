#include <stdio.h>
#include "main.h"

/**
 * main - func that prints the name of the program>.
 * @argc: number of args..
 * @argv: array of args..
 *
 * Return: Always 0 (if Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
