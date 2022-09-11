#include<stdio.h>
/**
 * main - A function that prints
 * Description - Prints number in base 16 starting from zero
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

