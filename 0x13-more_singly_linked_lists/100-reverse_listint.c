#include "lists.h"

/**
 * reverse_listint - Reverses
 * @head: pointer to the head
 * Return: pointer to node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;
	return (*head);
}
