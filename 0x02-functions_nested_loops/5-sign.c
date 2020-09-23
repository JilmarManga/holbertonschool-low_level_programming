#include "holberton.h"

/**
 * print_sign - prints the sign of a number.
 * @n: character to test.
 * Return: 1 if greater than 0, 0 if zero, -1 if lesser than 0.
 */

/*int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	_putchar (45);
	return (-1);

}
