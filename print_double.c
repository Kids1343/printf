#include <stdarg.h>
#include "holberton.h"
/**
 * length_d - prints recursively
 * @i: The number to get the length
 * @len: The number length
 *
 * Return: On success length.
 */
int length_d(unsigned int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat_d - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void repeat_d(unsigned int i)
{
	if (i / 10)
	{
		repeat_d(i / 10);
	}
	_putchar(i % 10 + '0');
}
/**
 * print_double - writes the double i
 * @param: The name for va_list
 *
 * Return: On success 1.
 */
int print_double(va_list *param)
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
	len += length_d(limit, len);
	repeat_d(limit);
	len = len + negative + 1;
	return (len);
}
