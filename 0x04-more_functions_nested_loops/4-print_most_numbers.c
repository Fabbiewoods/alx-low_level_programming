#include "main.h"

/**
 * print_most_numbers - this prints 0 to 9 excluding 2 and 4.
 * Return: void
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		if (m != 2 && m != 4)
			_putchar(m + '0');
	}
	_putchar('\n');
}
