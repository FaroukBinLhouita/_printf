#include "main.h"
#include <unistd.h>

/**
 * _putchar - print the charchter
 * @c: The character will print
 *
 * Return: return 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
