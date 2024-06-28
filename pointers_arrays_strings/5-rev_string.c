#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: integer value
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/**
	 * calculer la longueur de la chaine:
	 */
	while (s[length] != '\0')
	{
		length++;
	}

	/**
	 * Inverser la chaine:
	 *
	 * la boucle continue tant que i est inferieur a la
	 * moitie de la longueur de la chaine
	 */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];		   /** mettre i dans la variable temp */
		s[i] = s[length - 1 - i];  /** echanger i avec son oppose */
		s[length - 1 - i] = temp;  /** mettre l'oppose de i dans temp */
	}
}

