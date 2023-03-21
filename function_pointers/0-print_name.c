#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - in functon print name
 *@name: char string
 *@f:function pointeur
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
