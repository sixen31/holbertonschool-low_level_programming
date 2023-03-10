#include <stdlib.h>
/**
 *alloc_grid - alloue dynamiquement de la mémoire créer une grille à deux
 *@width: la largeur de la grille à créer
 *@height: la hauteur de la grille à créer
 *Return: un pointeur vers la grille allouée en mémoire, ou 0 en cas d'échec
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (0);

grid = (int **)malloc(height * sizeof(int *));
if (grid == 0)
return (0);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == 0)
{

for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (0);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
