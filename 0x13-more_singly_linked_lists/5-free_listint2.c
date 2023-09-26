#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees
 * @head: pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
