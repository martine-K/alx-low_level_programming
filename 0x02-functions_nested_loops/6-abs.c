#include "stdio.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer number onverted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
