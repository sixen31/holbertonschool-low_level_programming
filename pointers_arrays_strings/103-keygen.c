#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Point d'entrée
 * Description : Génère des mots de passe aléatoires pour le programme 101-crackme
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 * Return: Toujours 0
 */

int main(int argc, char *argv[])
{
	int somme = 0, i, n;

	if (argc < 2)
	{
		printf("Usage : %s <longueur_du_mot_de_passe>\n", argv[0]);
		return (1);
	}

	srand(time(NULL));

	n = atoi(argv[1]);

	while (somme < n - 122)
	{
		i = rand() % 122;
		if (i >= 48 || (i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		{
			putchar(i);
			somme += i;
		}
	}

	putchar(n - somme);

	return (0);
}
