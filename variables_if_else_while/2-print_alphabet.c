#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (ok)
 */

int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++);
	{
		putchar(ch);
	}
	putchar("\n");

	return (0);
}
