#include "main.h"
/**
 * _puts - prnts a string
 * @str: A pointer to an int that will be changd
 *
 * Return: void which means ou answer is correct
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str)
	}
	_putchar('\n');
}
