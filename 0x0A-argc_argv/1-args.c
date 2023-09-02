#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: number of command  arg
 * @argv: array of command arg
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
        (void)argc;
	printf("%d\n", argc - 1);
        return (0);
}
