#include "function_pointers.h"

/**
 * int_index - it searches for an integer
 * @array: it inputs integer array.
 * @size: the size of the array.
 * @cmp: the pointer to the function  that compare values.
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
