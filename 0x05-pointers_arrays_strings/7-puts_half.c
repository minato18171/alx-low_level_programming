#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @b: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int b)
{
	int last_digit = b % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
