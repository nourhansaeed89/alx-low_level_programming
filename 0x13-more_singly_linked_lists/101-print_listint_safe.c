#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Write a function that prints a listint_t linked list
 *
 * @head: start of node
 * Return: node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

	if (head < head->next)
	{
		break;
	}
	head = head->next;
	}

	if (head != NULL && head < head->next)
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		exit(98);
	}

	return (node_count);
}

