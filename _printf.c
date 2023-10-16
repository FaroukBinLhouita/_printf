#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
	va_list argument;
	int n, i, length = 0;
	char *str;

	va_start(argument, format);
	/* error check */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))/* check if NULL char */
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])/* check for only % in code */
		return (-1);
	while (format[length] != '\0')
	{
		if (format[length] != '%')
		{
			write(1, &format[length], 1);
			n++;
		}
		else
		{
			length++;
			if (format[length] == '%')
			{
                    _putchar(format[length]);
					n++;
            }
			else if (format[length] == 'c')
            {
                
				_putchar(va_arg(argument, int));
				n++;
            }
			else if (format[length] == 's')
            {
                
				str = va_arg(argument, char*);
				if (str == NULL)
                {
                    str = "(null)";
                }
                while (str[i] != '\0')
                {
                    i++;
                }
                write(1, str, i);
                n += i;
            }
            else if (format[length] == 'i')
			{
					convert_int(va_arg(argument, int));
					n++;
            }	
            else if (format[length] == 'd')
            {
                
					convert_int(va_arg(argument, int));
					n++;
            }
		}
		length++;
    }
	va_end(argument);
	
	if (n < 0)
		return (-10);

	return (n);
}