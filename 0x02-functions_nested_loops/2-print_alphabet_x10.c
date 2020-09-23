#include "holberton.h"

/**
 * print_alphabet_x10 - Print the lowercase alphabet 10 times
 *
 * Return : Always return avoid
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int times = 1;

	for (times = 1; times <= 10; times++)
	{
		for (lowercase = 97; lowercase <= 122; lowercase++)
		{
		_putchar(lowercase);
		}
	_putchar('\n');
}
}
