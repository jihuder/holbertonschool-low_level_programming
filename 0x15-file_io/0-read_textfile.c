#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: string of files name
 * @letters: letters to read and print
 * Return: Times of letters read and printed, and zero if there is an error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t RDcount, WDcount;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	RDcount = read(fd, buffer, letters);
	if (RDcount == -1)
		return (0);
	WDcount = write(STDOUT_FILENO, buffer, RDcount);
	if (WDcount == -1 || RDcount != WDcount)
		return (0);

	free(buffer);
	close(fd);
	return (WDcount);

}
