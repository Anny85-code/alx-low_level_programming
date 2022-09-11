#include<stdio.h>
/**
 * main - A functions that prints a statement
 * Description - Prints number in base 10 from 0 in a new line
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
