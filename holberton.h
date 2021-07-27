#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct printer - An structure for each format
 *
 * @format: character that represents the format
 * @func: function for each format
 */
typedef struct printer
{
	char format;
	int (*func)(va_list *);
} printer_t;

int _putchar(char c);
printer_t select_printer(char s);
int _printf(const char *format, ...);

int print_char(va_list *);
int print_string(va_list *);
int print_int(va_list *);
int print_unsigned_int(va_list *);
int print_double(va_list *);
int print_octal(va_list *);
int print_hexa(va_list *);
int print_mini_hexa(va_list *);
int print_binary(va_list *);
int print_special(va_list *);
int print_rot13(va_list *params);
int print_reverse(va_list *);

#endif
