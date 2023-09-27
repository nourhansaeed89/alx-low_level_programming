#include "lists.h"

/**
 * delete_nodeint_at_index - delet node
 *
 * @head: start node
 * @index: index of deleted node
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (!*head || !head)
	{
		return (-1);
	}
	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
