#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Duplique une chaîne de caractères.
 *
 * @str: La chaîne de caractères à dupliquer.
 *
 * Return: En cas de succès, un pointeur vers la chaîne dupliquée.
 *         En cas d'échec, NULL.
 */
char *_strdup(char *str)
{
char *dup_str;

if (str == 0)
return (0);

dup_str = malloc(strlen(str) + 1);

if (dup_str == 0)
return (0);
strcpy(dup_str, str);

return (dup_str);
}
