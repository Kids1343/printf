#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);

int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int* printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR (va_list arg);

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

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
