#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print combonation of two num
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
