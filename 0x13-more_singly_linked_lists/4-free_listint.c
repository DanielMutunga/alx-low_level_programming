#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the beginning of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next_list;

	while (head != NULL)
	{
		next_list = head->next_list;
		free(head);
		head = next_list;
	}
}

