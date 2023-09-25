#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int Fsum, Ssum, i;

	Fsum = 0;
	Ssum = 0;

	for (i = 0; i < size; i++)
	{
		Fsum = Fsum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		Ssum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", Fsum, Ssum);
}
