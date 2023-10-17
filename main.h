#ifndef MAIN_H
#define MAIN_H

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
*/

int _printf(const char *format, ...);
int _putchar(char c);
int _puts (char *str);
/*int _strlen(char *s);
int _isdigit(int c);
*/
#endif
