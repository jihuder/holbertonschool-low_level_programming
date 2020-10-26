#include <stdio.h>
#include <stdlib.h>

/**
 * main - print operation code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 - success -- 1 - if the arguments are incorrect
 * 2 - bytes are negative
 **/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	return (0);
}
