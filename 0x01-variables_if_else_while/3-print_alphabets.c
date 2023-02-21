#include <stdio.h>

/**
 * main -this func
 * return 0 if succes
 * */
int main(void)
{
	char ch;
	char ch1;

	ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
        for (ch = 'A'; ch <= 'Z'; ch1++)
	{
		putchar(ch1);
	}

	putchar('\n');
 	return (0);
}	
