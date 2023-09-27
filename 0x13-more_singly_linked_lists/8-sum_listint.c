#include "lists.h"

/**
 * sum_listint - unction that returns the sum of all the data
 * @head: start of node
 * Return: sum;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
