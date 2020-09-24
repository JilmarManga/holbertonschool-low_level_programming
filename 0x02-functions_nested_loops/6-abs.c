#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: number to compute.
 * Return: Absolute value.
 */

int _abs(int num)
{
	return (num <= 0 ? num * -1 : 1);
}
