#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: smile in the mirror
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch = ch - 1;
	}
	putchar('\n');
	return (0);

}
