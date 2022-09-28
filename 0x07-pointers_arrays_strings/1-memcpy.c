#include "main.h"
/**
* _memcpy - Copy addres form src to dest
* Description - Copy address
* @dest: Holds array address
* @src: Holds array poiinter values
* @n: Holds integer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(src + i) = dest;
}
return (dest);
}
