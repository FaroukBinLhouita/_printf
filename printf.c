#include "main.h"

/**
 * _printf - my printf function
 *
 * @fotmat: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
int int_return = 0;


if (*format == NULL)
{
return(-1);
}

va_list list;
va_start (list, format);

while (*format)
{
if (*format != '%')
{
write(1, format, 1);
int_return++;
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
write(1, *format, 1);
int_return++;
}
else if (*format == 'c')
{
char c = va_arg(list, int);
write(1, &c, 1);
int_return++;
}

else if (*format == 's')
{
int i;
char *string = va_arg(list, char*);

for (i = 0; string[i] != '\0'; i++)
;
write(1, string, i);
int_return += i;
}    
}

format++;
}

va_end(list);

return (int_return);
}
