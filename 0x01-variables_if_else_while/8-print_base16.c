#include <stdio.h>

/**
 * main - this is the entry point of the program.
 *
 * Return: this can be 0 on success.
 */

int main(void)
{
	int e;
	char u;

	for (e = 0 ; e < 10 ; e++)
		putchar (e + '0');
	for (u = 'a' ; u <= 'f' ; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
