#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 * Author: Martine Kungu
 * File: 5-print_numbers.c
 */


int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
