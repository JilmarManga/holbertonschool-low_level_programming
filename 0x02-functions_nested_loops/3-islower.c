#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to test.
 * Return: 1 if c is lowercase || 0 if isn´t lowercase.
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
