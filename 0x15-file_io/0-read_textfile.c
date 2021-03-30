#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: string of files name
 * @letters: letters to read and  print
 * Return: Times of letters read ans printed, and zero if there is an error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t escri, lee;
	char *tam = NULL;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	tam = malloc(sizeof(char) * letters);

	if (tam == NULL)
	{
		free(tam);
		return (0);
	}
	lee = read(file, tam, letters);
	if (lee == -1)
	{
		return (0);
	}
	escri = write(STDOUT_FILENO, tam, lee);
	if (escri == -1 || lee != escri)
		return (0);
	free(tam);
	close(file);
	return (escri);
}
