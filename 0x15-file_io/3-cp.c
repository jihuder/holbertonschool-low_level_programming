#include "holberton.h"

#define TAMAXI 1024
/**
 * main - Copies the content of a file to another file.
 * @argc: Accountant.
 * @argv: Arguemts as characters.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_f, file_cp, lee, esc;
	char *tam[TAMAXI], *namef = argv[1], *namet = argv[2];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	file_f = open(namef, O_RDONLY);
	if (file_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			namef), exit(98);
	file_cp = open(namet, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_cp == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			namet), exit(99);
	lee = 1;
	while (lee)
	{
		lee = read(file_f, tam, TAMAXI);
		if (lee == -1)
		      dprintf(STDERR_FILENO,
			      "Error: Can't read from file %s\n", namef),
			      exit(98);
		if (lee > 0)
		{
			esc = write(file_cp, tam, lee);
			if (esc != lee || esc == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", namet),
					exit(99);
		}
	}
	if (close(file_f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f),
			exit(100);
	if (close(file_cp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_cp),
			exit(100);
	return (0);
}
