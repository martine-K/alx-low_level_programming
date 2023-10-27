#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit (at an index)
 * @n: number to evaluate
 * @index: the index starting from 0
 * Return: the the Value of bit index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
