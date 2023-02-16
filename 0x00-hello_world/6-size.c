#include<stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	float c;
printf("Size of a char: %lu bytes(s)\n", sizeof(a));
printf("Size of an int: %lu bytes(s)\n", sizeof(b));
printf("Size of a float: %lu bytes(s)\n", sizeof(c));
return (0);
}
