#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node
 * @head: pointer to the head
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
