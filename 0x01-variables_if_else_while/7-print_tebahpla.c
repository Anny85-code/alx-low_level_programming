#include<stdio.h>
/**
 * main - A function that prints a statement
 * Description - prints a string char in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned int i;
for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
}
