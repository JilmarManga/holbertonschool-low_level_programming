#include <stdio.h>

/*
 * main : principal variable, emtry poitn
 *
 * Function : This code prints the alphabet in lowercase
 *
 * return : Always return 0
 */

int main(void)

{
char lowerCaseLetter;

for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
putchar(lowerCaseLetter);
putchar('\n');

return (0);
}
