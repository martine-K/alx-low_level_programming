#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: is the character to print
 *
 * Return: 1 on succesful execution.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
