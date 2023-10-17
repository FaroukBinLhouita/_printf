#include "main.h"

/**
 * _puts - prints string
 * @str: the string will print
 *
 * Return: 1 succes
 */
int _puts (char *str)
{
char *first = str;

while (*str)
{
    _putchar(*str++);
}
return (str - first);
}
/**
 * _putchar - print a charcter at a time
 * @c: the charcter
 *
 * Return: succes 1
 */
int _putchar(char c)
{
static int i;
static char buff[BUFF_SIZE];

if (c == BUFF_AGAIN || i >= BUFF_SIZE)
{
write(1, buff, i);
i = 0;
}
if (c != BUFF_AGAIN)
{
buff[i++] = c;
}
return (i);
}
