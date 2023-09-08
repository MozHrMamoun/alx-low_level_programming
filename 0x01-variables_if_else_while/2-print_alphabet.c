#include<stdio.h>
#

/**
 * main - Entry point
 *
 * Description: this program print all alphabet in order
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
