#include <stdio.h>

/**
 * main - Prints with proper grammar, but the outcome is a piece of art,
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == num * 3)
			printf("Fizz ");
		else if (num == num * 5)
			printf("Buzz ");
		else if (num == num * 15)
			printf("FizzBuzz ");
		else
		printf("%d ", num);
	}
	return (0);
}
