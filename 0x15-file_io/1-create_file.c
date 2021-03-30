#include "holberton.h"
/**
 * create_file - create a file whith read.
 * @filename: file delivery.
 * @text_content: write to file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int loon = 0;
	int WD_stat;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[loon] != '\0')
			loon++;
		WD_stat = write(file, text_content, loon);
		if (WD_stat == -1)
			return (-1);
	}
	close(file);
	return (1);
}
