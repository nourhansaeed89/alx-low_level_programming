#include <stdio.h>

/**
 * main - entry  point program that prints its name, followed by a new line
 *
 * @argc: integer
 * @argv: array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
