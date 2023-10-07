#include <stdio.h>

/**
 * main - this is the entry point for the program.
 *
 * Return: this can be 0 on succes.
 */

int main(void)
{
	int b;

	for (b = 0 ; b < 10 ; b++)
		putchar(b + '0');
	putchar('\n');
	return (0);
}
