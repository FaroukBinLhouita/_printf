#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
    char *string;
    char c;
    int i, j = 0, count = 0, index = 0;
    va_list list;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    {
    return (-1);
    }

    
	if (format[0] == '%' && format[1] == ' ' && !format[2])
    {
        return (-1);
    }

    va_start(list, format);

    while (format[j] != '\0')
    {
        if (format[j] != '%')
        {
            write(1, &format[j], 1);
            count++;
        }
        else
        {
            j++;
            if (format[j] == '%')
            {
                write(1, &format[j], 1);
                count++;
            }
            else if (format[j] == 'c')
            {
                c = va_arg(list, int);
                write(1, &c, 1);
                count++;
            }
            else if (format[j] == 's')
            {
                string = va_arg(list, char*);

                for(i = 0; string[i] != '\0'; i++);

                write(1, string, i);
                count += i;
            }
        }
        j++;
    }
    va_end(list);
    return (count);
}
