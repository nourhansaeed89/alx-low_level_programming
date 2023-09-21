#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 *
 * @head: start of node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n, *next_n;

	if (!head)
		return;

	n = head;
	while (n)
	{
		next_n = n->next;
		free(n->str);
		free(n);
		n = next_n;
	}
}
