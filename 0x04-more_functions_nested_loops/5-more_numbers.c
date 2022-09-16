#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing 10 times the numbers since 0 up to 14
 *
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(i / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
