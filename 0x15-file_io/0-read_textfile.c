#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/*
 * read_textfile - reads a text file and prints it to output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of bytes read and printed or 0 when fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w)i;
}
