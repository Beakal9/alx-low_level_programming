#include "main.h"

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - find len of string
 * @str: string to be measured
 *
 * Returns: len of string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * create_xarray - creates an array of chars
 * @size: size of the array
 *
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}
/**
 * iterate_zeroes - iterate through string of numbers
 * @str: string of numbers
 *
 * Return: pointer to the next non zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - convert digit to int
 * @c: char to be converted
 *
 * Return: the conv int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}
/**
 * get_prod - multiply string of nums
 * @prod: buffer to store res
 * @mult: str of nums
 * @digit: single digit
 * @zeroes: nec zeroes
 */
