#include <stdio.h>
#include"main.h"
/**
 * main - entry  point
 *
 * Description: Write a program that prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char L = 'a';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
}
