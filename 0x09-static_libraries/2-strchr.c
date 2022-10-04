#include "main.h"
/**
* _strchr - Locates a char
* Description - The function locates a char
* @s: holds a string pointer
* @c: holds a char
* Return: A string
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
}
