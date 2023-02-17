#include <stdio.h>
/**
 * main - prints all combination of single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 36; n < 96; n++)
	{
		putchar(n);
		if (n != 55)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
