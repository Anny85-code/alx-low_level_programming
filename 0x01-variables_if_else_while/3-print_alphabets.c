#include<stdio.h>
#include<ctype.h>
/**
 * main - Contains the main fnction
 * Description - Prints alphabets in upper and lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
unsigned int i;
for (i = 0; i < sizeof(alp); i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
