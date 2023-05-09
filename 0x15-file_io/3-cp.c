#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - copy file to another one
 * @argc: the number of arguments
 * @argv: array of command arguments
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
	char *s;
	int fd, ind, fd1, ind1;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664 | S_IWGRP);
	if (fd1 == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	s = malloc(1024);
	if (s)
	{
		while (ind > 0)
		{
			ind = read(fd, s, 1024);
			if (ind == -1)
				dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
			ind1 = write(fd1, s, ind);
			if (ind1 == -1)
				dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	ind = close(fd);
	if (ind == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	ind1 = close(fd1);
	if (ind1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (1);
}
