#include <stdio.h>

/**
 *main - Entry point
 *function: Print alphabet in lowercase and then in uppercase letters
 *Return: Always 0 (success)
 */

int main(void)

{
char lowerCaseLetter;

for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
putchar(lowerCaseLetter);

for (lowerCaseLetter = 'A'; lowerCaseLetter <= 'Z'; lowerCaseLetter++)
putchar(lowerCaseLetter);
putchar('\n');

return (0);

}
