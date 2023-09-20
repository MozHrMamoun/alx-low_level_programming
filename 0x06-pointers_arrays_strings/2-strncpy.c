#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c1;

	for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
		dest[c1] = src[c1];
	while (c1 < n)
	{
		dest[c1] = '\0';
		c1++;
	}

	return (dest);
}
