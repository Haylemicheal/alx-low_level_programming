#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: The file to be created
 * @text_content: The content of the text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;
	int i = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i])
			i++;
		nletters = write(file, text_content, i);
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
