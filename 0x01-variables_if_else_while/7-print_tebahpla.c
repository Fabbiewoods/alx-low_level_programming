#include <stdio.h>

/**
 * main - this is the entry point for the program.
 *
 * Return: this can be 0 on success
 */

int main(void)
{
	char h;

	for (h = 'z' ; h >= 'a' ; h--)
		putchar(h);
	putchar('\n');
	return (0);
}
