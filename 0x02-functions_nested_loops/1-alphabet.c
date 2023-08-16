#include <stdio.h>
#include "main.h"

/**
 *  print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Description: Write a function that prints the alphabet, in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
