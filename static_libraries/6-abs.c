#include "main.h"
#include <stdio.h>

/**
 * _abs -  Write a function that computes the absolute value of an integer
 * @j: nombre a rendre
 * Return: Always 0.
 */
int _abs(int j)
{
/*si j est positif  retournej */
if (j > 0)
return (j);

/*si j est negatif retourne inverse j */
else
return (-j);

return (0);
}
