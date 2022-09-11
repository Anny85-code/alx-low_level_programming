#include<stdio.h>
/**
 * main - A function that prints a statement
 * Description - Checks and print alphabets except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz";
unsigned int i;
for (i = 0; i < sizeof(alp); i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
