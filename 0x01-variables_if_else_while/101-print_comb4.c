#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: The success combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, a, b, c;

	ch = 0;
	for (ch = 1; ch < 1000; ch++)
	{
		a = ch / 100;
		b = ch / 10;
		c = ch % 10;

		if ((a > b || a > c || b > c) || ((a == b) || (b == c) || (a == c)))
		{
			continue;
		}

		putchar((a) + '0');
		putchar((b) + '0');
		putchar((c) + '0');
		if (ch == 999)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
