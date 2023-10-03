#include <stdio.h>
/**
 * main - main funct.
 * @argc: arg count.
 * @argv: arg vect.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int d = 0;

	while (d < argc)
	{

		printf("%s\n", argv[d]);
		d++;

	}
	return (0);

}
