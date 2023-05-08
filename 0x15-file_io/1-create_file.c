#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file -  creates a file
 * @filename: the name of the file
 * @text_content: string to write to the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ind = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd == -1)
			return (-1);
	}
	if (text_content)
		ind = write(fd, text_content, strlen(text_content));
	if (ind == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);



}
