#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Generates random passwords for 101-crackme program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, n;

	if (argc != 2)
	{
		printf("Usage: %s <password_length>\n", argv[0]);
		return (1);
	}

	srand(time(NULL));

	n = atoi(argv[1]);

	while (sum < n - 122)
	{
		i = rand() % 122;
		if (i >= 48 || (i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		{
			putchar(i);
			sum += i;
		}
	}

	putchar(n - sum);

	return (0);
}
