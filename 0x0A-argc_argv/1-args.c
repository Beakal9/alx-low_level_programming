#include <stdio.h>
/**
 * main - prints numbers
 * @args: arg count
 * @argv: arg vector
 * Return: return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
