#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using
 *
 * @old_size: old size
 * @new_size: new size
 * @ptr: pointer
 *
 * Return: return void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}

	if (new_size > old_size)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)x + i) = *((char *)ptr + i);
				free(ptr);
	}
	return (x);
}

