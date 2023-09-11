#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dog
 * @d: free dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
