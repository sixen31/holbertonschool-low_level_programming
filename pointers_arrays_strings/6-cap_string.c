#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
char prev = ' ';

for (i = 0; str[i] != '\0'; i++)
{
if (prev == ' ' || prev == '\t' || prev == '\n' ||
prev == ',' || prev == ';' || prev == '.' ||
prev == '!' || prev == '?' || prev == '"' ||
prev == '(' || prev == ')' || prev == '{' || prev == '}')
{
str[i] = toupper(str[i]);
}
prev = str[i];
}

return (str);
}
