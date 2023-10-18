/*#include "main.h"

*
 * _puts - prints string
 * @str: the string will print
 *
 * Return: 1 succes

int _puts (char *str)
{
int len = 0;
if (str == NULL)
return (0);
while (*str)
{
if (_putchar(*str++) == -1)
return (-1);
len++;
}
return (len);
}
/**
 * _putchar - print a charcter at a time
 * @c: the charcter
 *
 * Return: succes 1
 */
int _putchar(char c)
{
if (write(1, &c, 1) == -1)
{
return (-1);
}
return (1);
}
 */
