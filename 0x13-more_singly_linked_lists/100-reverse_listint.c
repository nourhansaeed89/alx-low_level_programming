#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a listint_t linked list
 *
 * @head: start node
 *
 * Return: head adress
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		node = next;
	}
	return (*head);
}
