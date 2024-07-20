#include "main.h"
/**
 * cap_string - function that capitalizes the first character of each word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalize = 1; // Flag to indicate if the next character should be capitalized

	while (str[index])
	{
		if (capitalize && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32; // Convert to uppercase
			capitalize = 0; // Reset flag after capitalizing
		}
		else if (str[index] == ' ' ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == ',' ||
				str[index] == ';' ||
				str[index] == '.' ||
				str[index] == '!' ||
				str[index] == '?' ||
				str[index] == '"' ||
				str[index] == '(' ||
				str[index] == ')' ||
				str[index] == '{' ||
				str[index] == '}')
		{
			capitalize = 1; // Set flag to capitalize the next character
		}
		else
		{
			capitalize = 0; // Do not capitalize if current character is not a separator
		}
		index++;
	}
	return (str);
}
