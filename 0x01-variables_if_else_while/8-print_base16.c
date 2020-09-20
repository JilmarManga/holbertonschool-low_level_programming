#include <stdio.h>

/**
 *main - Entry point
 *function: Print all the numbers of the base 16
 *Return: Always 0 (success)
 */

int main(void)

{
char numb;
char letter;

for (numb = '0'; numb <= '9'; numb++)
{
putchar(numb);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
