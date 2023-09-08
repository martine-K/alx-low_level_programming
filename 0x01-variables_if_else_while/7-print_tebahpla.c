#include <stdio.h>

/**
 * main - Entry point
 * 
 * Author: Martine Kungu
 * File: 7-print_tebahpla.c
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
