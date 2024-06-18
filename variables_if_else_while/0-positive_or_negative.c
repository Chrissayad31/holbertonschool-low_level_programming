#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		int printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		int printf("%d is zero\n", n);
	}
	else
	{
		int printf("%d is negative\n", n);
	}

	return (0);
}
