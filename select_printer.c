#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * select_printer - Selects a printer for the format and print the param.
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
printer_t select_printer(char format)
{
	int i, formats = 16;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'u', print_unsigned_int},
		{'d', print_double},
		{'o', print_octal},
		{'x', print_mini_hexa},
		{'X', print_hexa},
		{'b', print_binary},
		{'R', print_rot13},
		{'S', print_string},
		{'p', print_mini_hexa},
		{'r', print_reverse},
		{'l', print_unsigned_int},
		{'h', print_unsigned_int},
		{'*', print_special} /* SPECIAL PRINT MUST BE AT LAST, DON'T MOVE IT!!*/
	};

	for (i = 0; i < formats; i++)
		if (printers[i].format == format)
			return (printers[i]);
	return (printers[i - 1]); /* BY THIS REASON */
}
