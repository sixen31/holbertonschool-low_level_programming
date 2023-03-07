#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *           null byte (\0), to the buffer pointed to by dest.
 *@dest: A pointer to the buffer where the string is to be copied.
 *@src: The string to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
