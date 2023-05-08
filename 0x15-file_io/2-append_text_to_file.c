#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - append text to the end
 * @filename: the name of the file
 * @text_content: text to be appended
 * Return 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ind = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		ind = write(fd, text_content, strlen(text_content));
		if (ind == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);




}
