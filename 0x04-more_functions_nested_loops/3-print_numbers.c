#include "main.h"

/**
 * print_numbers - prints the numbers, from 0-9,
 * follow by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
