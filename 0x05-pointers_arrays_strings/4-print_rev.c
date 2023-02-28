#include "main.h"
/**
 * print_rev - display reverse string
 * @s: string would reversed
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
