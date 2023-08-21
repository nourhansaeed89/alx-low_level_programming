#include "main.h"

/**
 * swap_int -function that swaps the values of two integers
 * @a: pointer1
 * @b: pointer2
 */
void swap_int(int *a, int *b)
{
	int storage;

	storage = *a;
	*a = *b;
	*b = storage;
}
