#include "lists.h"

/**
 * pop_listint - deletes the header node of the list.
 * @head: the pointer to the list.
 * Return: head node.
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
