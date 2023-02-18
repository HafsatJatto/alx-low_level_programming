#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int h, j;

	for (h = 0; h < 100; h++)
	{
		for (j = 0; j < 100; j++)
		{
			if (h < j)
			{
				putchar((h / 10) + 48);
				putchar((h % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (h != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
