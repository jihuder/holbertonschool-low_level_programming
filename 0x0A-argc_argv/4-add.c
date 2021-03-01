#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */

int main(int argc, char *argv[])
{
	int c, j, r = 0;

	if (argc > 0)
	{
		for (c = 1; c < argc; c++)
		{
			for (j = 0; argv[c][j] != '\0'; j++)
			{
				if (!(isdigit(argv[c][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			r += atoi(argv[c]);
		}
		printf("%d\n", r);
	}
	else
		printf("0\n");
	return (0);
}
