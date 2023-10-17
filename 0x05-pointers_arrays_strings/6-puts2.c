#include "main.h"

/**
 * puts2 - this prints every other character of a string
 * @str: the string to be printed.
 * Return: void
 */

void puts2(char *str)
{
	int d;

	for (d = 0 ; str[d] != '\0' ; d++)
	{
		if (d % 2 == 0)
			_putchar(str[d]);
	}
	_putchar('\n');
}
