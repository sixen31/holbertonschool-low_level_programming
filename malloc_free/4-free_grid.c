#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libère la mémoire allouée pour une grille 2D
 *
 * @grid: le pointeur vers la grille à libérer
 * @height: la hauteur de la grille
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
