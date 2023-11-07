#include "main.h"

/**
 * _isupper - this checks for uppercase character.
 * @c: function paarameter.
 * Return: 1 on success, 0 on failure.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
