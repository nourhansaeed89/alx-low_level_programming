#include <stdio.h>
/**
 * main - entry  point
 *
 * Description: a program that prints  combinations of single-digit numbers
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
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
