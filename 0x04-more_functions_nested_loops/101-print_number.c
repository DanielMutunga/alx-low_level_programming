#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*
*/
void print_number(int n)
{
unsigned int y = n;
if (n < 0)
{
_putchar('-');
y = -y;
}
if (y > 9)
{
print_number(y / 10);
}
_putchar(y % 10 + '0');
}

