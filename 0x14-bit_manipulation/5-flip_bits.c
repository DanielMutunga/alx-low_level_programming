#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, check_bit;
	unsigned int count, j;

	count = 0;
	check_bit = 1;
	difference = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (check_bit == (difference & check_bit))
			count++;
		check_bit <<= 1;
	}
	return (count);
}
