#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * Write a function that reads a text file and prints it to the POSIX   standard output.Prototype: ssize_t read_textfile(const char *filename,   size_t letters); where letters is the number of letters it should read and   print returns the actual number of letters it could read and print if the  file can not be opened or read, return 0 if filename is NULL return 0 if  write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letsArr)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letsArr);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buff, letsArr);
	close(fd);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	if (r != w)
		return (0);
	return (w);
}
