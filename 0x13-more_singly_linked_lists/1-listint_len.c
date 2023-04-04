#include "lists.h"

/**
 * listint_len - returns the number_of_elements in a linked listint_t list.
 * @h: pointer to the linked list
 *
 * Return: number_of_elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
