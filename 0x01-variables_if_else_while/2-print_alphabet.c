#include <stdio.h>

/**
  *main - this main func print alphapts
  *Return: return 0 if success
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
