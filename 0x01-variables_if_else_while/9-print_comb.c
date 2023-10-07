#include <stdio.h>

/**
 * main - this is the entry point of the program.
 *
 * Return: this can be 0 on success.
 */

int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
	{
		putchar(p + '0');
		if (p != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
