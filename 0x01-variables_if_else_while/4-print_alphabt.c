#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char kj;

	for (kj = 'a'; kj <= 'z'; kj++)
	{
		if (kj != 'e' && kj != 'q')
			putchar(kj);
	}

	putchar('\n');

	return (0);
}
