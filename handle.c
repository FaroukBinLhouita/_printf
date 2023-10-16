/*#include "main.h"

/**
 * buffer_decimal - get the integer and convert to string
 * @num: get the integer
 * Return: return a pointer to a string

char *buffer_decimal(int num)
{
int size, temp, i;
char *result;
size = (num < 0) ? 2 : 1;
temp = num;
while (temp /= 10)
size++;

*result = malloc(size + 1);

if (result == NULL)
{
return NULL;
}

if (num < 0)
{
result[0] = '-';
num = -num;
}

i = size - 1;
handle_int_recursive(num, result, &i);

result[size] = '\0';

return result;
}

/**
 * buffer_char - get the char element
 * @va_arg: get the emlment
 * Return: return a varabile has the element

char buffer_char(va_list argument)
{
char c = va_arg(argument, int);
return (c);
}

/**
 * buffer_str - get the string
 * @va_arg: get the string
 * Return: return a varabile has the string

char *buffer_str(va_list argument)
{
char *str = va_arg(argument, char*);
return (str);
}

/**
 * handle_int_recursive - helper function to convert integer to string using recursion
 * @number: the integer to convert
 * @buffer: the buffer to store the string
 * @index: pointer to the current index in the buffer

void handle_int_recursive(int number, char *buffer, int *i)
{
if (number == 0)
return;

int n = number / 10;
handle_int_recursive(n, buffer, i);

buffer[*i] = '0' + (number % 10);
(*i)++;
}


#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager

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
*/