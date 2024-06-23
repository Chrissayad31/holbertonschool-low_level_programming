#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *print_sign - the sign of a number
 *@n: The number to be checked
 *Return: return 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
