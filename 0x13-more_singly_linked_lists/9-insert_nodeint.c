#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts a new node at a given position.
 * @head: the pointer to the list.
 * @idx: the position to add the node.
 * @n: data needed for the new node.
 * Return:  new node address or NULL.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	/* create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert at the begining for a border case */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* search the position to insert new data */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* the general case */
	if (cont == index && aux_node)
	{
		new_node->next = aux_node->next;
		aux_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts a new node at a given position.
 * @head: the pointer to the list.
 * @idx: the position to add the node.
 * @n: data needed for the new node.
 * Return: th new node address, or NULL.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	/* create the node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* insert at the begining for the border case */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* we search of position to insert */
	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* the general case */
	if (cont == index && aux_node)
	{
		new_node->next = aux_node->next;
		aux_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
