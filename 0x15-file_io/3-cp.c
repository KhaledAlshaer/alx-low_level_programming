#include "main.h"

#define BUFFER_SIZE 1024

int copy_file(const char *source_file, const char *destination_file);
int open_source_file(const char *source_file);
int open_destination_file(const char *destination_file);
void close_files(int fd_from, int fd_to);

/**
 *main - This is the function
 *@argc: this is a variable
 *@argv: this is a variable
 *Return: returns 0
*/
int main(int argc, char *argv[])
{
	int result = copy_file(argv[1], argv[2]);

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}


	if (result == 0)
		return (0);
	else
		return (result);
}

/**
 *copy_file - This is the function
 *@source_file: this is a variable
 *@destination_file: this is a variable
 *Return: returns 0
*/
int copy_file(const char *source_file, const char *destination_file)
{
	int fd_from = open_source_file(source_file);
	int fd_to = open_destination_file(destination_file);
	char buffer[BUFFER_SIZE];
	ssize_t read_result, write_result;

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", destination_file);
			close_files(fd_from, fd_to);
			return (99);
		}
	}

	if (read_result == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source_file);
		close_files(fd_from, fd_to);
		return (98);
	}

	close_files(fd_from, fd_to);
	return (0);
}

/**
 *open_source_file - This is the function
 *@source_file: this is a variable
 *Return: returns 0
*/
int open_source_file(const char *source_file)
{
	int fd_from = open(source_file, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	return (fd_from);
}

/**
 *open_destination_file - This is the function
 *@destination_file: this is a variable
 *Return: returns 0
*/
int open_destination_file(const char *destination_file)
{
	int fd_to = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
	);

	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", destination_file);
		exit(99);
	}

	return (fd_to);
}

/**
 *close_files- This is the function
 *@fd_from: this is a variable
 *@fd_to: this is a variable
 *Return: returns 0
*/
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
