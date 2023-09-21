#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node at the end of list
 *
 * @head: start node
 * @str: input string
 *
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
	return (NULL);

	list_t *new_end = malloc(sizeof(list_t));

	if (new_end == NULL)
	return (NULL);

	new_end->str = strdup(str);

	if (new_end->str == NULL)
	{
	free(new_end);
	return (NULL);
	}

	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		list_t *org = *head;

		while (org->next != NULL)
		{
			org = org->next;
		}
	org->next = new_end;
	}

	return (new_end);
}
