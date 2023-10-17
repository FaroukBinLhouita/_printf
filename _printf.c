#include "main.h"

/**
 * _printf - my printf function
 * @format: the string should print
 * Return: an integer
 */
int _printf(const char *format, ...)
{
    va_list list;
    int j = 0, count = 0;
    char *string;

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
        }
        j++;
    }

    va_end(list);
    return (count);
}
