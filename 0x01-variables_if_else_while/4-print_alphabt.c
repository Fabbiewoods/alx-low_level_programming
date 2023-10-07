#include <stdio.h>

/**
 * main - this is the entry point for the program.
 *
 * Return: this can be 0 on success.
 */
int main(void)
{
	char p;

	for (p = 'a' ; p <= 'z' ; p++)
		if (p != 'q' && p != 'e')
			putchar(p);
	putchar('\n');
	return (0);
}
