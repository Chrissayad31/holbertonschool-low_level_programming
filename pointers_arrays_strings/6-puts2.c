#include "main.h"

/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character
 *
 * @str: integer value
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
