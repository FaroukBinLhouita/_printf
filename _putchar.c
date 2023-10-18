#include "main.h"

/**
 * _puts - prints string
 * @str: the string will print
 *
 * Return: 1 succes
 */
int _puts(char *str)
{
int len = 0;
if (str == NULL)
return (0);
while (*str)
{
<<<<<<< HEAD
	_putchar(*str++);
=======
if (_putchar(*str++) == -1)
return (-1);
len++;
>>>>>>> a865776af9a8a558cb7b0a0124f03f149ecd7f2d
}
return len;
}
/**
 * _putchar - print a charcter at a time
 * @c: the charcter
 *
 * Return: succes 1
 */
int _putchar(char c)
{
<<<<<<< HEAD
return (write(1, &c, 1));
=======
if (write(1, &c, 1) == -1)
{
return (-1);
}
return (1);
>>>>>>> a865776af9a8a558cb7b0a0124f03f149ecd7f2d
}
