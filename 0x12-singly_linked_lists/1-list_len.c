#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements
 *
 * @h: poiner length
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	n++;
	h = h->next;
	}

	return (n);
}
