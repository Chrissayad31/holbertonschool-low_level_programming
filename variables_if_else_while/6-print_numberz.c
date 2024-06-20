#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (ok)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
