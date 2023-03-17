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
        int i, n;

        if (argc < 2)
        {
                printf("Usage: %s <password_length>\n", argv[0]);
                return (1);
        }

        srand(time(NULL));

        n = atoi(argv[1]);

        for (i = 0; i < n; i++)
        {
                int ascii_val = rand() % 62;
                char password_char;
                
                if (ascii_val < 10) 
                {
                    password_char = '0' + ascii_val;
                } 
                else if (ascii_val < 36) 
                {
                    password_char = 'a' + (ascii_val - 10);
                } 
                else 
                {
                    password_char = 'A' + (ascii_val - 36);
                }
                
                putchar(password_char);
        }

        putchar('\n');
        return (0);
}
