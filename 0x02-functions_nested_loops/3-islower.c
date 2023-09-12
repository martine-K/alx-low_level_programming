#include "stdio.h"
/**
 * _islower - tests whether a character is a
 * lowercase letter from the English a-z alphabet.
 * @c: character to test.
 * Return: 1 when the character is a lowercase letter and  0 when the character is  not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
