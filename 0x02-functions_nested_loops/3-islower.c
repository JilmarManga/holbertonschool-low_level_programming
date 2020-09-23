#include "holberton.h"

/**
 * _islower - check and print if letter stored in var c is lowercase
 *
 * @c : argument to validate
 *
 * return : 1 if c is lowercase || 0 if c isn´t lowercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
