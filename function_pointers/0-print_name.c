#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: Pointer to the name string
 * @f: Pointer to a function that takes a char *
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
