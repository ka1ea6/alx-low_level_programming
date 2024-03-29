#include "main.h"

/**
 * read_textfile - reads the file specified by filename
 *
 * @filename: name of the file to be read.
 * @letters: the length of the content to be read.
 *
 * Return: length of read content if successfull 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t wcount, read_check;
	char *buffer;

	if (!filename)
		return (0);


	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	read_check = read(file, buffer, letters);

	if (read_check == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, read_check);

	if (wcount == -1 || read_check != wcount)
		return (0);

	free(buffer);
	close(file);

	return (wcount);
}
