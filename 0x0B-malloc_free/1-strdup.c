#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int len = 0;
	char *duplicat;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
		len++;

	duplicat = malloc(sizeof(char) * (len + 1));
	while (*str != '\0')
	{
		duplicat[i] = str[i];
		i++;
	}
	return (duplicat);
}
