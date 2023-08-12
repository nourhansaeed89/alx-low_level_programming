#include <stdio.h>
/**
 * main - entry  point
 *
 * Description: Write a program that prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char L = 'z';

	while (L <= 'a')
	{
	putchar(L);
		L--;
	}
	putchar('\n');
	return (0);
}
