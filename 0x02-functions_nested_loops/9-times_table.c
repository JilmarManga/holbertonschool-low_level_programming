#include "holberton.h"

/**
 *times_table - Prints the 9 times table of 9.
 *Return: Always 0.
 */

void times_table(void)
{
	int col;
	int fil;
	int res;

	for (col = 0; col <= 9; col++)
	{
		for (fil = 0; fil <= 9; fil++)
		{
			res = fil * col;
			if (res <= 9)
			{
				if (fil == 0)
				{
					_putchar('0' + res);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + res / 10);
                                _putchar('0' + res % 10);
			}
		}
	_putchar('\n');
	}
}
