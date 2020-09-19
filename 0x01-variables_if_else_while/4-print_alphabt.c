#include <stdio.h>

/**
 *main - Entry point
 *function: Prints the alphabert without e and q
 *Return: Always 0 (success)
 */

int main(void)

{
char lowerCaseLetter;

for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
if (lowerCaseLetter != 'e' && lowerCaseLetter != 'q')
putchar(lowerCaseLetter);
putchar('\n');

return (0);
}
