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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
