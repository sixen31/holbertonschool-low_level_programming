#include "main.h"
/**
 * _strlen - Computes the length of a string.
 *
 * This function computes the length of the string pointed to by the
 * parameter s, excluding the terminating null byte ('\0').
 *
 * @param s Pointer to a null-terminated string.
 *
 * @return The length of the string.
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return len;
}
