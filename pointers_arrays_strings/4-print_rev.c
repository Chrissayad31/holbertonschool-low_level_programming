#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - function that print a string in reverse
 *
 * @s: integer value
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
