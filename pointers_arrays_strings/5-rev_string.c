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

	while (s[length] != '\0') /* calculer la longueur de la chaine */
	{
		length++;
	}

	/**
	 * Inverser la chaine:
	 *
	 * la boucle continue tant que i est inferieur a la
	 * moitie ©de la longuer de la chine
	 */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i]; /** mettre i dans la variable temp */
		s[i] = s[length - 1 - i]; /** eÃchanger i avec son opose */
		s[length - 1 - i] = temp; /** mettre l'oppose ©dans emp */
	}
}

