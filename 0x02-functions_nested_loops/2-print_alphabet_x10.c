#include "main.h"

/**
  *main - this main function is  prints 10 times the alphabet, in lowercase, followed by a new line.
  */

void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		for ( ch = 'a'; ch <= 'z';ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
