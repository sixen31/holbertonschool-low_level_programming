#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints any combination of char, int, float, and string arguments
 *
 * @format: a list of types of arguments passed to the function:
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
