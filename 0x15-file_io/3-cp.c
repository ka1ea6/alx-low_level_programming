#include "main.h"
/**
 * main - copies the contents of the file pointed
 * by the first argument upon executiont to the second
 * argument.
 *
 * @argc: the number of arguments passed.
 * @argv: list of arguments passed upon execution.
 * Return: 0 if successful, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	int from_size, to_size;
	int from_close, to_close;
	char *buffer[1024];
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	file_to =  open(argv[2],O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}


	while ((from_size = read(file_from, buffer, 1024)) != 0)
	{
		if (from_size == -1)
		{
			dprintf(2, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}

		to_size = write(file_to, buffer, from_size);

		if (to_size == -1)
		{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}

	from_close = close(file_from);
	
	if (from_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file_from);
		exit(100);
	}

	to_close = close(file_to);

	if (to_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file_to);
		exit(100);
	}

	return (0);
}
