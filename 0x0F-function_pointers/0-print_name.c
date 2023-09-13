#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Write a function that prints a name
 * @name: input name
 * @f: function
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
