#include "main.h"

/**
 * _pow - calculates a number to its base
 * @base: exponents base
 * @power: exponents power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int l;

	num = 1;
	for (l = 1; l <= power; l++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary notation of a number.
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, get;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		get = n & divisor;
		if (get == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
