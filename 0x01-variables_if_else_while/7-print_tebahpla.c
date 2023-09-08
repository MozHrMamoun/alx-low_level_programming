#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in reveres
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchat('\n');
	return (0);
}
