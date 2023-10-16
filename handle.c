#include "main.h"

/**
 * buffer_decimal - get the integer and convert to string
 * @num: get the integer
 * Return: return a pointer to a string
 */
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
 */
char buffer_char(va_list argument)
{
char c = va_arg(argument, int);
return (c);
}

/**
 * buffer_str - get the string
 * @va_arg: get the string
 * Return: return a varabile has the string
 */
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
 */
void handle_int_recursive(int number, char *buffer, int *i)
{
if (number == 0)
return;

int n = number / 10;
handle_int_recursive(n, buffer, i);

buffer[*i] = '0' + (number % 10);
(*i)++;
}