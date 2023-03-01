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

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 || isspace(str[i - 1]))
{
str[i] = toupper(str[i]);
}
else
{
switch (str[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case '\n':
case '\t':
case ' ':
if (!isspace(str[i - 1]))
{
str[i - 1] = toupper(str[i - 1]);
}
break;
default:
break;
}
}
}

return (str);
}
