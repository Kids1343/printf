#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line.
 * @s: the string to be printed
 * @length: String Length to be calculated.
 *
 * Return: String Length.
 */
int _print_rev_recursion(char *s, int length)
{
	if (s[0] != '\0')
	{
		length = _print_rev_recursion(s + 1, length + 1);
		_putchar(s[0]);
	}
	return (length);
}
/**
 * print_reverse - writes the string in reverse
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int print_reverse(va_list *params)
{
	int length = 0;
	char *str = va_arg(*params, char *);

	if (str == NULL)
		str = "(null)";
	return (_print_rev_recursion(str, length));
}
