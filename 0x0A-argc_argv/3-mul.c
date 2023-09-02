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
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2];
		printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
