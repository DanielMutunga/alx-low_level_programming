#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *fist, *second;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		first = *head;
		for (i = 0; i < idx - 1 && first != NULL; i++)
		{
			first = first->next;
		}
		if (first == NULL)
			return (NULL);
	}
	second = malloc(sizeof(listint_t));
	if (second == NULL)
		return (NULL);
	second->n = n;
	if (idx == 0)
	{
		second->next = *head;
		*head = second;
		return (second);
	}
	second->next = first->next;
	first->next = second;
	return (second);
}
