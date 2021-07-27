#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _printf - prints according to format
 * @format: The given format
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _printf(const char *format, ...)
{
	va_list params;
	printer_t current_printer;
	int i = 0, putchar_flag = 1, length = 0;

	if ((format == NULL) || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(params, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			if (putchar_flag)
				length += _putchar(format[i]);
			else
			{
				current_printer = select_printer(format[i]);
				if (current_printer.format != '*')
					length += current_printer.func(&params);
				else
					length += _putchar('%') + _putchar(format[i]);
				putchar_flag = 1;
			}
		else
			if (putchar_flag)
				putchar_flag = 0;
			else
			{
				/* ToDO: Add condition for blanks */
				length += _putchar(format[i]);
				putchar_flag = 1;
			}
		i++;
	}
	va_end(params);
	return (length);
}
