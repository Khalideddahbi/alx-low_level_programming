#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees
 * @head: pointer to the head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
