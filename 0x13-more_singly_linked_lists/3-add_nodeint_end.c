#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of  list
 *
 * @n: new node value
 * @head: start of node
 * Return: new node
 */





listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	 listint_t *current;

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

	while (current->next)
		current = current->next;

	current->next = new_node;
	}

	return (new_node);
}
