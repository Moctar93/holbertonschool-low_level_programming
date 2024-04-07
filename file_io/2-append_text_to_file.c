#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: string to add at the end of the file
 * Return: 1 if success and -1 if faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_description;
	int length, written;

	if (!filename)
	{
		return (-1);
	}

	file_description = open(filename, O_WRONLY | O_APPEND);

	if (file_description == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		written = write(file_description, text_content, length);

		if (written == -1)
			return (-1);
	}
	close(file_description);
	return (1);
}
