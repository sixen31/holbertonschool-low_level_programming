#include <stdio.h>
#include <unistd.h>

int main(void)
{
int i;
char digit[2];
for (i = 0; i < 10; i++)
{
digit[0] = (i % 10) + '0';
write(1, digit, 1);
}
putchar('\n');
return (0);
}
