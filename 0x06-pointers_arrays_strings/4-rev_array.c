#include "main.h"

/**
 * reverse_array - this is a function that reverses an array.
 * @a: the pointer to an array.
 * @n: the number of element in an array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
