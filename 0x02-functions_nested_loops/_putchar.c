#include <instd.h>

/**
 * _putchar - write the character c to stdout
 *
 * @c: the character to print
 *
 * Return: On success 1
 * on fail -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
