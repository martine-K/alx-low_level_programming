#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning of a listint_t list.
 * @head: the pointer of the first element in the list.
 * @n: integer 
 * Return: NULL if it failed or the address of the new element
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
