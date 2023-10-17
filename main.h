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

int _printf(const char *format, ...);
int _putchar(char c);
int _puts (char *str);
int _convert(int num, char *str);
#endif
