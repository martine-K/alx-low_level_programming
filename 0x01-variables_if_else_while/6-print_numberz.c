#include <stdio.h>

/**
 * main - Entry point
 * 
 * Author: Martine Kungu
 * File: 6-print_numberz.c
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}

