#include "holberton.h"

/**
 ** _printf - Entry Point
 ** @format: list of characters representing type of args
 **
 ** Description: prints each argument to standard output per the specified
 ** type of input
 ** Return: 0 Success, FAILURE???
 **/

int _printf(const char *format, ...)
{
	char *copy;
	unsigned int i, j;

	find_pf_func pf_func = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list print_list;
	va_copy(printlist, copy);
	va_start(copy, format);

	i = 0;

	while (copy != NULL && copy[i] != '\0')
	{
		j = 0;
		get_pf_func(copy[i]);
		i++;
	}

	va_end(print_list);
	Return (0);
}
