#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 * @argc: The number of arguments.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int i, n, sum;
	char *password;
	unsigned int rand_val;

	if (argc != 2)
	{
		printf("Usage: %s <password_length>\n", argv[0]);
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 8)
	{
		printf("Password length must be at least 8\n");
		exit(1);
	}

	srand(time(NULL));
	password = malloc(n * sizeof(char));

	for (i = 0, sum = 0; i < n - 1; i++)
	{
		rand_val = rand();
		password[i] = rand_val % 94 + 33;
		sum += password[i];
	}

	password[n - 1] = 125 - (sum % 94);
	password[n] = '\0';

	printf("%s\n", password);

	free(password);

	return 0;
}
