#include "main.h"

/**
 *create_file - This is the function
 *@filename: this is a variable
 *@text_content: this is a variable
 *Return: returns 0
*/
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	mode_t file_permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_permissions);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
