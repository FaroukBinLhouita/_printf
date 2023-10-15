#include "main.h"

/**
 * _printf - my printf function
 *
 * @fotmat: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list list;

    if (format == NULL)
    {
        return (-1);
    }

    va_start(list, format);

    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            count++;
        }
        else
        {
            format++;
            if (*format == '\0')
            {
                break;
            }

            if (*format == '%')
            {
                write(1, format, 1);
                count++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(list, int);
                write(1, &c, 1);
                count++;
            }
            else if (*format == 's')
            {
            int i = 0;
            char *string = va_arg(list, char*);

            while (string[i] != '\0')
            {
                i++;
            }
            
            write(1, string, i);
            count += i;
            }
        }

    format++;
    }

    va_end(list);

    return (count);
}
