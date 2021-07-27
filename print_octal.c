#include <stdarg.h>
#include "holberton.h"
/**
 * print_base8 - prints number in base 8 recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: length.
 */
int print_base8(unsigned int value, int length)
{
	if (value / 8)
		length = print_base8(value / 8, length + 1);
	_putchar(value % 8 + '0');
	return (length);
}

/**
 * print_octal - From decimal to Octal
 * @params: The name for va_list
 *
 * Return: number length.
 * On error, -1 is returned.
 */
int print_octal(va_list *params)
{
	int length = 0;
	unsigned int value = va_arg(*params, unsigned int);

	length = print_base8(value, length) + 1;
	return (length);
}
