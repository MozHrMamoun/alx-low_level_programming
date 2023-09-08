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

	for (int i = 0; i < 26 ; i++)
	{
		putchar(alpha);
		alpha+=1;
	}
	putchar('\n');
	return (0);
}
