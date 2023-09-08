#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: this program shows if the random number last digit and if  it zero or greater than 5 or less than 6
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;
	if (last == 0)
		printf("Last digit of %i is %i and is 0", n, last);
	else if (last > 5)
		printf("Last digit of %i is %i and is greater than 5", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0", n, last);
	return (0);
}
