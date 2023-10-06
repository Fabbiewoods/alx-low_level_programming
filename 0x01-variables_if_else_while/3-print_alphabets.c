#include <stdio.h>

/**
 * main - this is the entry point for the program.
 *
 * Return: this is always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
