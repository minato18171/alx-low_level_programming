#include "main.h"
#include <stdio.h>

/**
 * main-Entry point
 *
 * This function prints all lowercase letters of the English alphabet in order,
 *
 * Return:Always 0(succes).
 */
int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i <= 8; i++)
	{
		putchar(str[i]);
	}

	return (0);
}
