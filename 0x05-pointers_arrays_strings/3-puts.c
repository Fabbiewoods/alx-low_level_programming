#include "main.h"

/**
 * _puts - this function prints a string.
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
