#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry  point program that prints its name, followed by a new line
 *
 * @argc: integer number
 * @argv: array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int result = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}

