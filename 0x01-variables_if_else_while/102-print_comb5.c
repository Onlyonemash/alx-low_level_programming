#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: software is eating the world
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, ch2;

	ch = 0;
	while (ch < 100)
	{
		ch2 = ch++;
		for (ch2 = 1 ; ch2 < 100; ch2++)
		{
			putchar((ch / 10) + '0');
			putchar((ch % 10) + '0');
			putchar(' ');
			putchar((ch2 / 10) + '0');
			putchar((ch2 % 10) + '0');
			if (ch2 == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		ch++;
		if (ch == 99)
		{
			break;
		}
	}
	putchar('\n');
	return (0);

}
