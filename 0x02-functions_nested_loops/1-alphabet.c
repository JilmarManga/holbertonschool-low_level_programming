#include "holberton.h"

/**
 * print_alphabet - prints entire alphabet in lowercase letters
 *
 * Return : Always return void
 */

void print_alphabet(void)
{

	char lowercaseLetter;

	for (lowercaseLetter = 'a'; lowercaseLetter <= 'z'; lowercaseLetter++)
	{
		_putchar(lowercaseLetter);
	}
	_putchar('\n');
}
