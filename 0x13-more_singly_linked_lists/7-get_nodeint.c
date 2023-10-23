#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth number of node in the linked list.
 * @head: the  pointer to the list.
 * @index: nth number node.
 * Return: nth node or NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
