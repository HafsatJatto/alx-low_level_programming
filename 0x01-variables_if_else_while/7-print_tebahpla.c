#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char ej;

	for (ej = 'z'; ej >= 'a'; ej--)
		putchar(ej);

	putchar('\n');

	return (0);
}
