#include "main.h"

/**
 * _strncat - Concatenate strings
 * Description - Concatenate string
 * @dest: holds a string
 * @src: holds a string
 * @n: input integer
 * Return: Always 0 success
 */

char *_strncat(char *dest, char *src, int n)
{
int count, count2;
count = 0;
count2 = 0;
while (*(dest + count) != '\0')
{
count++;
}
while (count2 < n)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}

