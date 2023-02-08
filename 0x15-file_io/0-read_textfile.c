#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: chars to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	fd_read = read(fd, buff, letters);
	if (fd_read == -1)
		return (0);
	fd_write = write(STDOUT_FILENO, buff, fd_read);
	if (fd_write == -1)
	{
		free(buff);
		return (0);
	}
	if (fd_read != fd_write)
		return (0);
	free(buff);
	close(fd);
	return (fd_write);
}
