#include "lists.h"

/**
 * free_listint2 - frees a list. Sets head to NULL
 * @head: pointer to pointer to the head of the list
 *
 * Return: Void 
 */
void free_listint2(listint_t **head)
{
	listint_t *loop;

	if (head == NULL)
		return;

	while (*head)
	{
		loop = (*head)->next;
		free(*head);
		*head = loop;
	}
	*head = NULL;
}
