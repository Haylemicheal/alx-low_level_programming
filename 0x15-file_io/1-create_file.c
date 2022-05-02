#include "main.h"

/**
 * create_file - FUnction that creates a file
 * @filename: file to be created
 * @text_content: The text that will be contained in a created file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;
	int len = 0;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
			len++;
		nletters = write(file, text_content, len);
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
