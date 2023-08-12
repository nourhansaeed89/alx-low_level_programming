#include <stdio.h>
/**
 * main - entry  point
 *
 * Description: Write a program that prints all single digit numbers of base 10
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);

		if (i != 9)
		{
			putchar(' , ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
