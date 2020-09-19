#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (success)
*/

int main(void)
{

char lowerCaseLetter;

for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
putchar(lowerCaseLetter);
putchar('\n');

return (0);
}
