#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - Prints the method
 *@n: integer to operate
 *Return: Always 0
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
                        {
                                printf("%d", x);
                        }
                        else
                        {
	                        printf("%d, ", x);
                        }
		}
	}
	printf("\n");
}
