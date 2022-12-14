#include "main.h"

/**
 * infinite_add - C function that adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @size_r: size of buffer
 * @Return: returns pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Adds the num stored
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @r_index: current index of buffer
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for ( ; *n && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for ( ; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for ( ; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
