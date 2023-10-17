#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int print_c(va_list arg);
int _printf(const char *format, ...);
void handle_int(int number);

#endif

/*
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void convert_int(int number);

#endif
*/