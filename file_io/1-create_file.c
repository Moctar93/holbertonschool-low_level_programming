#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_description;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	file_description = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_description == -1)
	{
		perror("open");
		return (-1);
	}
	if (text_content != NULL)
	{
		length = write(file_description, text_content, strlen(text_content));
		if (length == -1)
		{
			perror("write");
			close(file_description);
			return (-1);
		}
	}
	close(file_description);
	return (1);
}
