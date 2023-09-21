#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: str value
 */
char *leet(char *str)
{
	char *pStr = str;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(letters) / sizeof(val); i++)
			if (*str == letters[i] || *str == letters[i] + 32)
				*str = 48 + val[i];
		str++;
	}
	return (pStr);
}
