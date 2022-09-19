#include "main.h"

/**
 * _strlen -> function to get the length of a string
 * @s: string pointer tobe passed to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
