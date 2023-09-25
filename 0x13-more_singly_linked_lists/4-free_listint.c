#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list
 * @head: start of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
