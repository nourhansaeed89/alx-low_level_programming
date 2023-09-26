#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 *
 * @head: start of node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (!head)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
