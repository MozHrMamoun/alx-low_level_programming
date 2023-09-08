#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 0, 1, .. 9
 *
 * Return: 0 always (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
