#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: patience
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	ch = 0;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar((ch % 10) + '0');
		if (ch == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
