#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - Appends the text at the end of this file.
 * @filename: To be pointed to the file
 * @text_content: Pointer to the string to add to the end of the file.
 *
 * Return: If the function fails or name of the file is NULL - -1.
 *         If the file does not exist or user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int descripttion, write_result, text_len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[text_len])
text_len++;
}
description = open(filename, O_WRONLY | O_APPEND);
if (description == -1)
return (-1);
write_result = write(description, text_content, text_len);
if (write_result == -1)
{
close(description);
return (-1);
}
close(description);
return (1);
}
