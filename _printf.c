#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i, j = 0;
	char *str;

	va_start(list, format);
	
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    {
        return (-1);
    }

	if (format[0] == '%' && format[1] == ' ' && !format[2])
    {
        return (-1);
    }

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
                //write(1, &format[j], 1);
				_putchar(format[j]);
				count++;
            }
			else if (format[j] == 'c')
            {
				//c = va_arg(list, int);
				//write(1, &c, 1);
				_putchar(va_arg(list, int));
				count++;
            }
			else if (format[j] == 's')
            {
				str = va_arg(list, char*);
				if (str == NULL)
                {
                    str = "(null)";
                }
                for (i = 0; str[i] != '\0'; i++);
                
                write(1, str, i);
                count += i;
            }
            else if (format[j] == 'i')
			{
				convert_int(va_arg(list, int));
				count++;
            }	
            else if (format[j] == 'd')
            {
				convert_int(va_arg(list, int));
				count++;
            }
		}
		j++;
    }
	va_end(list);
	
	if (count < 0)
    {
        return (-10);
    }

	return (count);
}
