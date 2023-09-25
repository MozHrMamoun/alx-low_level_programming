#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pHay = haystack;
		char *pNeedl = needle;

		while (*l == *pNeedl && *pNeedl != '\0')
		{
			pHay++;
			pNeedl++;
		}

		if (*pNeedl == '\0')
			return (haystack);
	}

	return (0);
}
