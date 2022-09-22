#include "main.h"
/**
 * _strcmp - Compares strings
 * Description - Compares strings
 * @s1: holds a string
 * @s2: holds a string
 * Return: Always 0 success
 */

int _strcmp(char *s1, char *s2)
{
int count;
int count2;
while (*(s1 + count) == '\0')
{
count++;
}
while (*(s2 + count2) == '\0')
{
if (*(s1 + count) == *(s2 + count2))
	break;
int op = *(s1 + count) - *(s2 + count2);
count2++;
}
return (op);
}
