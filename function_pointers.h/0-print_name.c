#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print *name
 * @name: name parameter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f) == NULL)
		return;
	(*f)(name);
}
