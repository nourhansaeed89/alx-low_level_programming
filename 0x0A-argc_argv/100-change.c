#include <stdio.h>

/**
 * main - entry  point
 *
 * @argc: integer num
 * @argv: array
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastnum = 0, money = stoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastnum += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastnum);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
