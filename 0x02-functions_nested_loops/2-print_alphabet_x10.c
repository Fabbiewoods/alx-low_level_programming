#include "main.h"

/**
 * print_alphabet_x10 - this prints the alphabet in lowercase 10x
 *
 * Return: this returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	char e;

	for (i = 0 ; i < 10 ; i++)
	{
		for (e = 'a' ; e <= 'z' ; e++)
			_putchar(e);
		_putchar('\n');
	}
}
