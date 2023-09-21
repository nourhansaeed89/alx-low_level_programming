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
	list_t *new_node = malloc(sizeof(list_t));
	list_t *n = *head;

	if (!head || !new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	new_node->len = _strlen(new_node->str);
	}
	if (n)
	{
		while (n->next)
			n = n->next;
		n->next = new_node;
	}
	else

	*head = new_node;
	return (new_node);
}
