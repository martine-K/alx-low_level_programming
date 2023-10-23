#include "lists.h"

/**
 * sum_listint - it returns the sum of all the data in the listint_t list.
 * @head: the pointer to the list.
 * Return: the sum of all data in the list, or 0 if empty.
 **/
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
