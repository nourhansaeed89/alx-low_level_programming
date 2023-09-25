#include "lists"

/**
 * add_nodeint - unction that adds a new node at the beginning
 *
 * @head: start of list
 * @n : num of list
 * Eeturn: node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
	{
	return (NULL);
	}

	node->next = NULL;
	node->n = n;

	if (*head)
		node->next = *head;

	*head = node;


	return (node);
}
