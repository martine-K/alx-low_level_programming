#include <stdio.h>
/**
 * main - it prints the number of arguments passed to it.
 * @argc: the number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
