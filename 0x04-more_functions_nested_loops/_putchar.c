#include <unistd.h>

/**
 * _putchar - prints the character to standard output
 * @c: character to be checked
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
