#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: input array
 * @size: size of array
 * @cmp: compare num
 * Return: the first element for which the cmp function does not return 0
 * If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[i]))
				return (x);
			i++;
		}
	return (-1);
}
