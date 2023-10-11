#include "3-calc.h"

/**
 * op_add - it adds two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - it subctracts two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - it multiplies two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - it divides two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - it calculates the module of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
