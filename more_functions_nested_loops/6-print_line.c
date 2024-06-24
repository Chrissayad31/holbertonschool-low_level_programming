#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer value
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			putchar('_');
		}
	}

	putchar('\n');
}
