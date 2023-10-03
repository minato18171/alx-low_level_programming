#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funct
 * @argc: arg count.
 * @argv: arg vect.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i, j, mul;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);

	}

	return (0);

}
