#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 * @head: pointer to pointer to the head of the list
 * @n: new integer data for node
 *
 * Return: Address of the new element or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head; /* to be used for last node */

	/* allocate a new node */
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	/* put data into the new node */
	new_node->n = n;

	/* make new node become NULL */
	new_node->next = NULL;

	/* if the list is empty, make new node the head */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	/* otherwise loop through list until NULL (the end of the list) */
	while (last->next != NULL)
	{
		last = last->next;
	}

	/* change the next of the existing last node*/
	last->next = new_node;

	return (new_node);
	free(new_node);
}
