#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing 10 times the numbers since 0 up to 14
 *
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 14; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 10) + '0');
			}
			putchar((n2 % 10) + '0');
		}
		putchar(10);
	}
}
