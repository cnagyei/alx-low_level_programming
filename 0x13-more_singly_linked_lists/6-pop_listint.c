#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: pointer to pointer to the head of the list
 *
 * Return: Head node's data (n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *loop;

	if (head == NULL)
		return (0);

	loop = (*head)->next;
	free(*head);
	*head = loop;

	return ((*head)->n);
}
