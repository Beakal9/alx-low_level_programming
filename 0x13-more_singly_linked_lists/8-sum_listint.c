#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of all data
 * @head: pointer to the head
 * Return: sum of all the data or 0
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
