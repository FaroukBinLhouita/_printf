#include "main.h"

/**
 * _putchar - print a charcter at a time
 * @c: the charcter
 *
 * Return: an integer
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
