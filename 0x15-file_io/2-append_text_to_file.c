#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wcount, size;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (!file)
		return (-1);
	size = 0;
	while (text_content[size] != '\0')
		size++;

	wcount = write(file, text_content, size);

	if (wcount == -1 || wcount != size)
		return (-1);

	return (wcount);
}
