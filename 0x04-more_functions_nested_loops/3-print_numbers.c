#include <stdio.h>
#include "main.h"

/**
 * print_numbers - this prints numbers from0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
		putchar(k + '0');
	putchar('\n');
	}
}
