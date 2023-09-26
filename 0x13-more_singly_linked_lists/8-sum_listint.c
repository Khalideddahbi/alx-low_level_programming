#include "lists.h"

/**
 * sum_listint - Returns the sum of the data
 * @head: pointer to the head
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
