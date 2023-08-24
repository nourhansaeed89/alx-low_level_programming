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
	int j;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		storage = a[i];
		a[i] = a[j];
		a[j] = storage;

	}
}
