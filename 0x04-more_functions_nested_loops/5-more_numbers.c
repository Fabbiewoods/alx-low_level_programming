#include "main.h"

/**
 * more_numbers - this prints numbers from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int h;

	for (i = 0 ; i < 10 ; i++)
	{
		for (h = 0 ; h <= 14 ; h++)
		{
			if (h > 9)
				_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
