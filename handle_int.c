/*#include "main.h"
*
 * _convert - converts an integer to a string
 * @num: the integer to convert
 * @str: the buffer to store the string
 * Return: the length of the string
 
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
}while (num > 0);

for (j = 0, k = i - 1; j < k; j++, k--)
{
char temp = str[j];
str[j] = str[k];
str[k] = temp;
}
str[i] = '\0';
return (i);
}
*/
