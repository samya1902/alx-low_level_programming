#include "function_pointers.h"
/**
 * print_name - function that orint a name
 * @name: string to add
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
