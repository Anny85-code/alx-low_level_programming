#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 to 9
 * Description - prints numbers between 9 to except 2 and 4.
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
int ch;
for (ch = 48; ch < 58; ch++)
{
if (ch != 50 && ch != 52)
_putchar(ch);
}
_putchar('\n');
}
