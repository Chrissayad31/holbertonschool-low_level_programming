#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character to be verified
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
