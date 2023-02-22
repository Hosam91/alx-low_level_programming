#include "main.h"

/**
  *main - this is main function print putchar
  *returns 0 if sucess
  */

int main(void)
{
	char ch[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(ch[num]);
	}
	_putchar('\n');
	return (0);
}
