#include <stdarg.h>
#include "holberton.h"
/**
 * length_i - prints recursively
 * @i: The number to get the length
 * @len: The number length
 *
 * Return: On success length.
 */
int length_i(unsigned int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat_i - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void repeat_i(unsigned int i)
{
	if (i / 10)
	{
		repeat_i(i / 10);
	}
	_putchar(i % 10 + '0');
}
/**
 * print_int - writes the integer i
 * @param: The name for va_list
 *
 * Return: On success 1.
 */
int print_int(va_list *param)
{
	int i = 0, len = 0, negative = 0;
	unsigned int limit;

	i = va_arg(*param, int);
	if (i < 0)
	{
		_putchar('-');
		limit = -i;
		negative = 1;
	}
	else
		limit = i;
	len += length_i(limit, len);
	repeat_i(limit);
	len = len + negative + 1;
	return (len);
}
