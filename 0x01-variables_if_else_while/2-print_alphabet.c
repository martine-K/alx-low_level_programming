#include <stdio.h>

/**
 * main - Entry point
 *
 *Author: Martine Kungu
 *File: 2-print_alphabet.c
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
