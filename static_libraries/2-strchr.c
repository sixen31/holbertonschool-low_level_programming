#include "main.h"
/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: If c is found, a pointer to the first occurrence
 *         in s. Otherwise, NULL is returned.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return (0);
}
