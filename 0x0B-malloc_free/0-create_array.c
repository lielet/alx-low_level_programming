#include"main.h"
#include <stdlib.h>
/**
 * create_array - is a function that creates an array of chars
 * @size: is the size to be allocated
 * @c: is the char which will determine the size
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
        unsigned int i;
         if (size == 0)
		return (0);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
