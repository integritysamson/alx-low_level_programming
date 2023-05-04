#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: To ptint out this character
 *
 * Return: On success 1.
 * On error, -1 is returned, and on error is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
