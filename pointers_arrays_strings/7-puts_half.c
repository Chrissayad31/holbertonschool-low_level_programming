#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: integer value
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
		length++;
	}

	/**
	 * De©terminer le point dede©part pour l'impession
	 */
	if (length % 2 == 0)
	{
		start = length / 2; /** point de depart longueur paire */
	}
	else
	{
		start = (length - 1) / 2 + 1; /** point de depart longueur impaire */
	}

	/**
	 * Imprimer les caracteres a partir de 'start' jusqu'a la fin de la chaine
	 */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
}
