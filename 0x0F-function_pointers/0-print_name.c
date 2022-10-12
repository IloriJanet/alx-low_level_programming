#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: name to be printed
 * @f: function pointer that dooesn't return anything
 *
 * Return: Always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
