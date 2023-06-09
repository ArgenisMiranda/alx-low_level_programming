#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *fname;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	fname = malloc(sizeof(char) * (letters));
	if (!fname)
		return (0);

	nrd = read(fd, fname, letters);
	nwr = write(STDOUT_FILENO, fname, nrd);

	close(fd);

	free(fname);

	return (nwr);
	}
