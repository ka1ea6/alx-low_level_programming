#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wcount, size;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	size = 0;
	while(text_content[size] != '\0')
		size++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	wcount = write(file, text_content, size);
	if (wcount == -1 || wcount != size)
		return (-1);
	close(file);

	return (wcount);
}
