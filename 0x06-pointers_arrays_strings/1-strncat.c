#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	while (dest[c1])
		c1++;
	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c1++] = src[c2];
	dest[c1] = '\0';
	return (dest);
}
