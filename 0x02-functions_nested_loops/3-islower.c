#include "holberton.h"

/**
 * _islower - print if letter stored in variable c is lowercase
 *
 * return : 1 if int _islower is true || 0 if int _islower is false
 */

/* c : argument to validate */
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
