#include "main.h"

/**
 * _abs - this is the function to find the absolute value of a number
 * @a: this is a function parameter
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
