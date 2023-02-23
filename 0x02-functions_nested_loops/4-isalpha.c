#include "main.h"

/**
  *_isalpha - check if the char is alphabet or not
  *@c: char which will be checked
  *       
  *Return: i if alph 0 or not
  */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}	
