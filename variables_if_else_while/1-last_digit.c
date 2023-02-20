#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is positive", n);
if (n % 2 == 0) {
printf("%d even number\n", n);
}
else 
{
printf("%d odd number\n", n);
}
return 0;
}
