#include "function_pointers.h"

/**
 * print_name - it prints a name.
 * @name: it inputs name.
 * @f: the function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
