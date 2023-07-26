#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: A pointer to an integer to be swapped.
 * @b: A pointer to another integer to be swapped.
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
