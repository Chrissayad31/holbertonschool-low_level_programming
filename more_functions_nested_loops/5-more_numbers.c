#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
