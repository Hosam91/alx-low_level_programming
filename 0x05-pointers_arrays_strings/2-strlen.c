#include "main.h"
/**
  * _strlen - give us the number of string
  * @s: input
  * Return: the length of s
  */
int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
