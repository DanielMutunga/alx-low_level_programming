#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int addition, get;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	addition = 1 << index;
	get = n & addition;
	if (get == addition)
		return (1);
	return (0);
}
