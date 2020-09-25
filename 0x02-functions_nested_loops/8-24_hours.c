#include "holberton.h"

/**
 * jack_bauer - main function.
 * Description: This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: none.
 */

void jack_bauer(void)
{
	int hor;
	int min;

	for (hor = 0; hor <= 23; hor++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + hor / 10);
			_putchar('0' + hor % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}

}

