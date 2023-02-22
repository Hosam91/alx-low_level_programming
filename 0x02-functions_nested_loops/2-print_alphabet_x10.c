#include "main.h"

/**
  *print_alphabet_x10 - print 10 alphabets
  */

void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
