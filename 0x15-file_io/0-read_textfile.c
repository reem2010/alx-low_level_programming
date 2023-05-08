#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it
 * @filename: the file name
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ind, ind2;
	char *out;

	if (!filename)
		return (0);
	out = malloc(letters);
	if (!out)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(out);
		return (0);
	}
	ind = read(fd, out, letters);
	if (ind == -1)
	{
		free(out);
		return (0);
	}
	ind2 = write(STDOUT_FILENO, out, ind);
	if (ind2 == -1 || ind2 != ind)
	{
		free(out);
		return (0);
	}
	free(out);
	close(fd);
	return (ind);

}

