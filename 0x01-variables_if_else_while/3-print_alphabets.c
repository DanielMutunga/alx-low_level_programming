#include<stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: Always 0.
 */
int main(void)
{
        char letter;

        for (letter = 'A'; letter <= 'Z'; letter++)
                putchar(letter);
        putchar('\n');
        return (0);
}
