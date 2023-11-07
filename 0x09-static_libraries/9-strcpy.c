#include "main.h"

/**
 * _strcpy - this copies the string
 * @dest: this is the destination
 * @src: this is the source.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
