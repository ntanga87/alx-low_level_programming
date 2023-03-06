#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: on success 1.
 * On error , -1 is returned , errno is set appropriately
 */
int _putchar(char c)
{
	return( write(i, &c, 1));
}
