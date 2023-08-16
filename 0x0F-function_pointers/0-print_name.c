#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry point
 * Description: print name using pointer to function
 * @name: string to print
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	
	(*f)(name);
}
