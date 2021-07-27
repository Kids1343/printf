#include <stdarg.h>
#include "holberton.h"
/**
 * print_char - writes the character c
 * @params: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int print_char(va_list *params)
{
	char c = va_arg(*params, int);

	_putchar(c);
	return (1);
}
