#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: the head
 * @index: index of node
 * Return: pointer to nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
