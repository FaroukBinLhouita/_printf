#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...) {
    if (format == NULL) {
        return -1;
    }

    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format != '%') {
            write(1, format, 1);
            count++;
        } else {
            format++;  // Move to the character after '%'
            if (*format == '\0') {
                break;  // Break if '%' is at the end of the format string
            }

            if (*format == '%') {
                write(1, format, 1);
                count++;
            } else if (*format == 'c') {
                char c = (char)va_arg(args, int);
                write(1, &c, 1);
                count++;
            } else if (*format == 's') {
                char *str = va_arg(args, char*);
                int i = 0;
                while (str[i] != '\0') {
                    write(1, &str[i], 1);
                    count++;
                    i++;
                }
            }
        }
        format++;
    }

    va_end(args);

    return count;
}
