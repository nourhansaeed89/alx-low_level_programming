#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input Array
 * @n:  number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int storage;

	for (i = 0; i < (n - 1); i++)
	{
		storage = a[i];
		a[i] = a[n];
		a[n] = storage;
	}
}
