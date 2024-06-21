#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 1 (good)
 * Return: 0 (not good)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
