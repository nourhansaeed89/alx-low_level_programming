#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start node
 * @idx: index
 * @n: value of node
 * Return: address ofnewnode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}

