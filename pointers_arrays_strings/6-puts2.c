#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character starting from the 1st.
 * @str: input string.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}
