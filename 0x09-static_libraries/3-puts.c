#include "main.h"
/**
 * _puts - prnts a string
 * @str: A pointer to an int that will be changd
 *
 * Return: void which means ou answer is correct
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
