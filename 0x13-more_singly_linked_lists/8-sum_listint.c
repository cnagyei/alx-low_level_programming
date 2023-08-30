#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: Sum of n, 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
