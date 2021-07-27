#include <stdarg.h>
#include "holberton.h"
/**
 * print_base2 - prints numbers in binary recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed
 *
 * Return: On success length.
 */
int print_base2(unsigned int value, int length)
{
	if (value / 2)
		length = print_base2(value / 2, length + 1);
	_putchar(value % 2 + '0');
	return (length);
}
/**
 * print_binary - writes in binary
 * @params: The name for va_list
 *
 * Return: On success length.
 */
int print_binary(va_list *params)
{
	int length = 0, negative = 0;
	unsigned int b = va_arg(*params, unsigned int);

	length = print_base2(b, length) + negative + 1;
	return (length);
}
