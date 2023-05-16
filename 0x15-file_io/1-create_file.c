#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"
/**
* create_file - Creates a file with the specified name and writes the text
*               content to the file.
* @filename: The name of the file to create.
* @text_content: The text content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd, write_status, close_status;
ssize_t len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
write_status = write(fd, text_content, len);
if (write_status == -1 || write_status != len)
{
close(fd);
return (-1);
}
}
close_status = close(fd);
if (close_status == -1)
return (-1);
return (1);
}
