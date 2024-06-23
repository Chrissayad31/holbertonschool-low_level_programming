#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_last_digit - print the last digit of a number.
 * @n: The integer to be computed.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
