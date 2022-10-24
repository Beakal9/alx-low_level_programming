#include "lists.h"
/**
 * get_nodeint_at_index - finds given node in linked list
 * @head: pointer to the head
 * @index: index of the node
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
