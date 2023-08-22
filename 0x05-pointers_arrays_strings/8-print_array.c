#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
	{
		printf(" %d ", a[i]);
		else
		printf("%d", a[i]);
	}
	}
	printf("\n");
}
