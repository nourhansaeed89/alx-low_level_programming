#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node of a list
 *
 * @head: start of node
 * @index: index of node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	for (current = head, i = 0; current && i < index;
			current = current->next, i++)
		;

	return (current);
}

