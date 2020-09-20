#include <stdio.h>
/**
 *main - Entry point
 *function: Print all possible combinations of single-digit numbers
 *Return: Always 0 (success)
 */

int main(void)
{

int numb;

numb = 0;

while (numb < 100)
{
putchar((numb / 10) + '0');
putchar((numb % 10) + '0');
if (numb < 99)
{
putchar(',');
putchar(' ');
}
numb++;

}
putchar('\n');
return (0);

}
