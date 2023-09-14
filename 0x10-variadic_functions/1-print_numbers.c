#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 * @separator: separator
 * @n: numbers
 * @...: print numbers
 * Return: return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("/n");
		return;
	}
	va_start(ap, n);
		while (i--)
		printf("%d%s", va_arg(ap, int), i - 1 ? (separator ? separator : "") : "\n");
	va_end(ap);
}
