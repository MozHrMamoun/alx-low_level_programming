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
	int numbers[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
			if (*str == letters[i] || *str == letters[i] + 32)
				*str = 48 + numbers[i];
		str++;
	}
	return (pStr);
}
