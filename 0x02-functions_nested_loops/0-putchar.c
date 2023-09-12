#include <stdio.h>
/*
 * main - prints the string "Martine Kungu ALX student" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "Martine Kungu ALX student";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
