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
int i = 0, op = 0;
while (op == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
op = *(s1 + i) - *(s2 + i);
i++;
}
return (op);
}
