#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}

