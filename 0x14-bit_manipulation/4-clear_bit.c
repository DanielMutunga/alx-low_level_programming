#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index of the  set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bit = ~(1 << index);
	*n = *n & set_bit;
	return (1);
}

