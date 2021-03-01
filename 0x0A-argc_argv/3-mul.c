#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 * @argc: Array of pointers
 * @argv: Entered arguments
 * Return: 0
 */

int  main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
}
	return (0);
}
