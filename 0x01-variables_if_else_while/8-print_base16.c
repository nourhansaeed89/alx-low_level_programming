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

	for (i = 48; i < 58; i++)
	{
		printf(i);
	}

	for (i = 97; i < 103; i++)
	{
	printf(i);
	}
	putchar('\n');
	return (0);

}
