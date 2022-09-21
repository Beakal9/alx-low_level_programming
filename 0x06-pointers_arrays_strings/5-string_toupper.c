#include "main.h"
/**
 * string_toupper - changes all lowecase letters of a striing to uppercase
 * @str: parameter
 * Return: returns a characater
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
