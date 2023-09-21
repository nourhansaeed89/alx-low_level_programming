#include "lists.h"

/**
 * _strlen -check string length
 * @s: input string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * print_list - Write a function that prints all the elements of a list_t list
 *
 * @h: pointer list
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
