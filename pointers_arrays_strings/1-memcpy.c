#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *pdest = dest;
char *psrc = src;

for (i = 0; i < n; i++)
{
*pdest++ = *psrc++;
}

return (dest);
}
