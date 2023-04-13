#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (length == -1)
		return (-1);
	return (1);
}

