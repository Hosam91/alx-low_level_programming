#include "main.h"
/**
  * puts_half - print half of string
  * @s: string printed
  */
void puts_half(char *s)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 != 0)
	{
		for (j = (count + 1) / 2; j < count; j++)
		{
			_putchar(s[j]);
		}
	}
	else
	{
		for (j = count / 2; j < count; j++)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
