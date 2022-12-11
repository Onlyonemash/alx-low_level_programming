#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;
	char hex[16] = {"0123456789abcdef"};

	ch = 0;

	for (ch = 0; ch <= 15; ch++)
	{
		putchar(hex[ch]);
	}
	putchar('\n');
	return (0);

}
