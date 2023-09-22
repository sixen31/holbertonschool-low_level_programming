#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Recherche une valeur dans un tableau trié d'entiers 
 * en utilisant l'algorithme de recherche binaire.
 *
 * @array: Pointeur vers le premier élément du tableau à rechercher.
 * @size: Nombre d'éléments dans le tableau.
 * @value: Valeur à rechercher.
 *
 * Return: L'index où la valeur se trouve.
 * Si la valeur n'est pas présente dans le tableau ou si le tableau 
 * est NULL, retourne -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Affiche un tableau d'entiers.
 *
 * @array: Pointeur vers le premier élément du tableau à afficher.
 * @left: Indice de début du tableau à afficher.
 * @right: Indice de fin du tableau à afficher.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}
