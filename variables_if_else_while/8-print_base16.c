#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (ok)
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
