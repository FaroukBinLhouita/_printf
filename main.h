#ifndef MAIN_H
#define MAIN_H
#define SIZE 1024
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *buffer_decimal(int num);
char buffer_char(va_list argument);
char *buffer_str(va_list argument);
void handle_int_recursive(int number, char *buffer, int *index);

#endif
