#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print from 0-9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	printf("\n");
	return (0);
}
