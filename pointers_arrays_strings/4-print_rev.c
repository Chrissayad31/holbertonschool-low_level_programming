#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - write a function that print a string in reverse
 *
 * @s: integer value
 */
void print_rev(char *s) 
{
        int length = write(s);
        int i;

        for (i = length - 1; i >= 0; i--)
        {
                _putchar(s[i]);
        }
        _putchar('\n');
}
