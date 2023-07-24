#include "main.h"

/**
 * swap_int - Interchanges the values of 2 integers.
 * @a: Pointer to the first integer...
 * @b: Pointer to the second integer...
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

