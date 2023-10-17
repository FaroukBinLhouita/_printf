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
return(write(1, &c, 1));
}

#include "main.h"

int _convert(int num, char *str)
{
    int j, k, i = 0;

    if (num < 0)
    {
        num = -num;
        str[i++] = '-';
    }

    do
    {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);

    for (j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }

    return (i);
}
