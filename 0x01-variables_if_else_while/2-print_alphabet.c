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
	char L = 'a';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
