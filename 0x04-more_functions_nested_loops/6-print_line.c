#include "main.h"

/**
 * print_line - this prints straight lines on the terminal
 * @n: number of times the character '_' will ne printed.
 * Return: void.
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
