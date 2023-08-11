#include <stdio.h>
/**
 * main - entry  point
 *
 * Description: Write a program that prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
