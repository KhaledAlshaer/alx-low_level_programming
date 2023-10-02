#include "main.h"

/**
 *read_textfile - This is the function
 *@filename: this is a variable
 *@letters: this is a variable
 *Return: returns 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, written;
	char *c;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);

	if (c == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, c, letters);

	if (bytes_read == -1)
	{
		free(c);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, c, bytes_read);

	if (written == -1 || written != bytes_read)
	{
		free(c);
		close(fd);
		return (0);
	}

	free(c);
	close(fd);
	return (written);
}
