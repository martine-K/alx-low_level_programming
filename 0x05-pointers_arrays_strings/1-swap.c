#include "main.h"

/**
 * swap_int -the function swaps the values of two integers
 * @a: the pointer to first value
 * @b: the pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
