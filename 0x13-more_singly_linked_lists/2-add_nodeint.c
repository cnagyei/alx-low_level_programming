#include "lists.h"

/**
 * add_nodeint - returns the number of elements in a linked list
 * @head: pointer to pointer to the head of the list
 * @n: new integer data for node
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* allocate a new node */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/* put data into the new node */
	new_node->n = n;

	/* make new node the head (and to become part of the list) */
	new_node->next = (*head);

	/* move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
	free(new_node);
}
