#include "holberton.h"

/**
 * print_last_digit - main function.
 * @num: Number.
 * Description: This function prints the last digit of a number.
 * Return: The value of the last digit.
 */

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(48 + lastDigit);

return (lastDigit);

}
