#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 *
 * @head: start node
 * Return: value of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
	{
		return (0);
	}

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
