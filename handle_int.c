#include "main.h"
/**
 *  _print_integer - function that prints integer
 * @arg: va_list input
 * Return: length ==> number of character printed
 */
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

return (1);
}
