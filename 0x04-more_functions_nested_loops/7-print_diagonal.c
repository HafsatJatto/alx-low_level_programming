#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times to print diagonal lines.
 * Return: no return.
 */
void print_diagonal(int n)
{

	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
