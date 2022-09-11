#include<stdio.h>
/**
 * main - A function that prints numbers
 * Description - Prints numbers with separated commas and space
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
