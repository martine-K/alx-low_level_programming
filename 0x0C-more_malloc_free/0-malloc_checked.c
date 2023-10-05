#include "main.h"

/**
 * malloc_checked - it allocates memory using malloc, exit(98) if it fails
 * @b: the size of the memory block to be allocated
 *
 * Return: the pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
