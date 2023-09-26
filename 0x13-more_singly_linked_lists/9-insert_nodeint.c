#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: pointer to the head
 * @idx: index to new node
 * @n: data for new node
 * Return: address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *p;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	p = *head;
	while (p != NULL && count < idx - 1)
	{
		p = p->next;
		count++;
	}
	if (count != idx - 1 || p == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = p->next;
	p->next = new_node;
	return (new_node);
}
