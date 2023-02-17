#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char cj;

	for (cj = 'a'; cj <= 'z'; cj++)
		putchar(cj);

	for (cj = 'A'; cj <= 'Z'; cj++)
		putchar(cj);

	putchar('\n');

	return (0);
}
