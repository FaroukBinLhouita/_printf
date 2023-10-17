#include "main.h"

/**
 * _itoa - converts an integer to a string
 * @num: the integer to convert
 * @str: the buffer to store the string
 * Return: the length of the string
 */
int _itoa(int num, char *str)
{
    int i = 0;

    // Handle the case of a negative number
    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }

    // Convert the number to a string in reverse order
    do
    {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);

    // Reverse the string
    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }

    return i;
}
