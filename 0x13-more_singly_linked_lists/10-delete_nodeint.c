#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - entry point
 * @head: pointer to the head
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	p = *head;
	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	while (p != NULL && count < index - 1)
	{
		p = p->next;
		count++;
	}
	if (count != index - 1 || p->next == NULL)
		return (-1);
	temp = p->next;
	p->next = temp->next;
	free(temp);
	return (1);
}
