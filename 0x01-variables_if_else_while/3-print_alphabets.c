#include<stdio.h>
#include<ctype.h>
/**
 * main - Contains the main fnction
 * Description - Prints alphabets in upper and lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
unsigned int i;
for (i = 0; i < sizeof(alp); i++)
{
putchar(alp[i]);
}
putchar(toupper(alp[26]));
putchar('\n');
return (0);
}
