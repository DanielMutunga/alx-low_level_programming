#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
int side1, side2;

if (size > 0)
{
for (side1 = 1; side1 <= size; side1++)
{
for ((side2 = size - side1); side2 > 0; side2--)
_putchar(' ');

for (side2 = 0; side2 < side1; side2++)
_putchar('#');

if (side1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
