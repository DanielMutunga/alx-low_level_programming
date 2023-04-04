#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *first, *second;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		second = (*head)->next;
		free(*head);
		*head = second;
		return (1);
	}
	first = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (first->next == NULL)
			return (-1);
		first = first->next;
	}
	second = first->second;
	first->next = second->next;
	free(second);
	return (1);
}
