#include "main.h"

/**
 * main - printing numbers
 * more_numbers -> printing more integersig
 * Return: Always success
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
