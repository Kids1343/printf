#include <stdarg.h>
#include "holberton.h"
/**
 * print_base16 - prints number in base 16 recursively
 * @value: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: length.
 */
int print_base16(unsigned int value, int length)
{
	if (value / 16)
		length = print_base16(value / 16, length + 1);
	if (value % 16 < 10)
		_putchar(value % 16 + 48);
	else
		_putchar(value % 16 + 55);
	return (length);
}

/**
 * print_hexa - From decimal to hexadecimal
 * @params: The name for va_list
 *
 * Return: number length.
 * On error, -1 is returned.
 */
int print_hexa(va_list *params)
{
	int length = 0, negative = 0;
	unsigned int value = va_arg(*params, unsigned int);

	length = print_base16(value, length) + negative + 1;
	return (length);
}
