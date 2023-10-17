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
    char *str;

    va_start(list, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[j] != '\0')
    {
        if (format[j] != '%')
        {
            count += _putchar(format[j]);
        }
        else
        {
            j++;

            if (format[j] == '%')
            {
                count += _putchar('%');
            }
            else if (format[j] == 'c')
            {
                count += _putchar(va_arg(list, int));
            }
            else if (format[j] == 's')
            {
                str = va_arg(list, char*);
                if (str == NULL)
                    str = NULL_STR;
                count += _puts(str);
            }
        }
        j++;
    }

    _putchar(BUFF_AGAIN);
    va_end(list);
    return (count);
}
