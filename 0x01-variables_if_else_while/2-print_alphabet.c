#include<stdio.h>
/**
 * main - A function with a print method
 * Description - Prints a char in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
char alp;
alp[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int i;
for (i = 0; i < sizeof(alp); i++)
{
putchar(alp[i]);
}
putchar("\n");
return (0);
}
