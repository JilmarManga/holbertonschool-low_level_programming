#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: number to compute.
 * Return: Absolute value.
 */

int _abs(int num)
{

	if (num <= 48)
	{
		return (num * (-1));
	}
	else
	{
		return (num);
	}

}
