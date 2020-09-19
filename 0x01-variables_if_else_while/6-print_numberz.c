#include <stdio.h>

/**
 *main - Entry point
 *function: Print single digit numbers in base 10
 *Return: Always 0 (success)
 */

int main(void)

{
char numb;

for (numb = '0'; numb <= '9'; numb++)
putchar(numb);
putchar('\n');

return (0);
}
