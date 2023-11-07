#include "main.h"

/**
 * _strncpy - this concatenates two strings.
 * @dest: this is the destination string.
 * @src: this is the source string.
 * @n: the number of bytes to concatinate.
 * Return: dest;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
