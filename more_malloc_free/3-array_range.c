#include <stdlib.h>
/**
 *array_range - Crée un tableau d'entiers contenant une plage de nombres
 *@min: le nombre le plus petit de la plage
 *@max: le nombre le plus grand de la plage
 *   Return: Un pointeur vers le tableau d'entiers nouvellement créé.
 *
 *       Si l'allocation de mémoire échoue ou si min > max, renvoie NULL.
 *
 */
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

i = 0;
while (min <= max)
{
arr[i] = min;
min++;
i++;
}
return (arr);
}
