#include "main.h"
#include <stdio.h>
/**
 * main - Checks for uppercase
 * _isupper - checks if parameter is an uppercase character.
 * Description - checks for uppercase
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}



