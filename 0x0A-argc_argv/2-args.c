#include <stdio.h>

/**
 * main - Main Function
 * @argc: Array of pointers
 * @argv: Entered arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
