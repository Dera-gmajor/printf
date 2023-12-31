#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @put: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char put)
{
	return (write(1, &put, 1));
}
