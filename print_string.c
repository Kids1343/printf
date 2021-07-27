#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_string - writes the string
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int print_string(va_list *params)
{
	int length = 0;
	char *str = va_arg(*params, char *);

	if (str == NULL)
		str = "(null)";
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}

	return (length);
}
