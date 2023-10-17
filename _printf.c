#include "main.h"

/**
 * _printf - my printf function
 * @format: the string should print
 * Return: an integer
 */
int _printf(const char *format, ...)
{
va_list list;
int len, num, j = 0, count = 0;
char *string, num_str[12];

va_start(list, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

while (format[j] != '\0')
{
if (format[j] != '%')
{
_putchar(format[j]);
count++;
}
else
{
j++;

if (format[j] == '%')
{
_putchar('%');
count++;
}
else if (format[j] == 'c')
{
_putchar(va_arg(list, int));
count++;
}
else if (format[j] == 's')
{
string = va_arg(list, char*);
if (string == NULL)
string = NULL_STR;
count += _puts(string);
}
else if (format[j] == 'd' || format[j] == 'i')
{
int num = va_arg(list, int);
char num_str[12];
int len = _itoa(num, num_str);
count += _puts(num_str);
}
}
j++;
}

va_end(list);
return (count);
}
