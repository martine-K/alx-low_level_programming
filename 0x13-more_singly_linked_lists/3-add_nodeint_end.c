#include "lists.h"

/**
 * add_nodeint_end - it adds a new node to the end of a listint_t list.
 * @head: the pointer of the first element in the list.
 * @n: integer number
 * Return: NULL if failled or the address of the new element.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;

	return (new);
}
