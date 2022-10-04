#include "main.h"
/**
 * _strncpy - Copies a string
 * Description - Copies a string to another string
 * @src: holds a string
 * @dest: holds a string
 * @n: holds an integer
 * Return: Always 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
