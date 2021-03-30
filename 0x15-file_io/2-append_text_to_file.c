#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: entre file
 * @text_content:  add to end of file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int stati;
	int cuent = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	while (text_content[cuent] != '\0')
		cuent++;
	stati = write(file, text_content, cuent);
	if (stati == -1)
		return (-1);
	close(file);
	return (1);
}
