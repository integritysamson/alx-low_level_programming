#include "main.h"
/**
 * create_file - Creates a file.
 *
 * @filename: The name of the file to be created.
 * @text_content: The text to be written to the file.
 *
 * Return: If the function fails  return - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
int description, bytes_written, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
description = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytes_written = write(description, text_content, len);
if (description == -1 || bytes_written == -1)
return (-1);
close(description);
return (1);
}
