#include<stdio.h>
/**
 * main - A function with a print method
 * Description - Prints a char in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[26];
alp[26] = "abcdefghijklmnopqrstuvwxyz";
char i;
for (i = 0; i < sizeof(alp); i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
