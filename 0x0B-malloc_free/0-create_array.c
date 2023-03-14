#include <stdlib.h>
#include "main.h"
/**
 * create_and_initialize_char_array - Creates and initializes a char array
 * @size: The size of the char array to create
 * @initial_char: The char to initialize the array with
 *
 * Return: A pointer to the initialized char array, or NULL on failure
 */
char *create_and_initialize_char_array(int size, char initial_char)
{
	char *char_array;
	int i;

	char_array = malloc(size * sizeof(char));
	if(char_array == NULL)
	{
		return NULL;
	}
	for(i = 0; i < size; i++)
	{
		char_array[i] = initial_char;
	}
	char_array[i] = '\0';
	return (char_array);
}
