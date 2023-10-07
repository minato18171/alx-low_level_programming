#include "main.h"
#include<stdlib.h>
/**
 * create_array - creates an array of chars..
 * @size: size.
 * @c: array.
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	p = (char *) malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (0);
	}
	while (size--)
	{
		p[size] = c;
	}

return (p);
}
