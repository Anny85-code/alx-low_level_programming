#include<stdio.h>
/**
 * main - A function that prints a statement
 * Description - prints a string char in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
unsigned int i;
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = sizeof(alp - 1); i > 0; i--)
{
putchar(alp[i]);
}
putchar('\n');
}
