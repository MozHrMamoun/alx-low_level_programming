#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints with put char 0-9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
