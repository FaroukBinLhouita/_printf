#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
char buffer[SIZE];
int index = 0;
va_list list;

if (format == NULL)
{
return (-1);
}

va_start(list, format);

while (*format)
{
if (index == SIZE - 1)
{
buffer[index] = '\0';
write(1, buffer, index);
index = 0;
}

if (*format != '%')
{
buffer[index] = *format;
index++;
}

else
{
format++;
if (*format == 's')
{
int i;
char *tmp = buffer_str(list);
for (i = 0; tmp[i] != '\0'; i++)
{
    buffer[index] = tmp[i];
    index++;
}
}
else if (*format == 'c')
{
buffer[index] = buffer_char(list);
index++;
}
else if (*format == 'i' || *format == 'd')
{
int num = va_arg(list, int);
char *num_str = buffer_decimal(num);
while (*num_str)
{
    buffer[index] = *num_str;
    num_str++;
    index++;
}
}
else if (*format == '%')
{
buffer[index] = *format;
index++;
}
}
format++;
}

if (index > 0)
{
buffer[index] = '\0';
write(1, buffer, index);
}

va_end(list);
return (index);
}
