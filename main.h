#ifndef _PRINTF_H
#define _PRINTF_H

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFF_SIZE 1024
#define BUFF_AGAIN -1
 
#define NULL_STR "(null)"

/* print function
int print_c (va_list list,);
int print_int (va_list list,);
int print_str(va_list list,);
int print_percent(va_list list,);
int print_s(va_list list,);

if (format[0] == '%' && format[1] == ' ' && !format[2]  || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
*/

int _printf(const char *format, ...);
int _putchar(char c);
#endif
