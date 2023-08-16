#include <stdio.h>
#include "main.h"
/**
 * main - entry  point
 *
 * Description: Write a C program that print by using puts function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
		_putchar('\n');
	}

	return (0);
}
