#include "holberton.h"

/**
 ** _printf - Entry Point
 ** @format: list of characters representing type of args
 **
 ** Description: prints each argument to standard output per the specified
 ** type of input
 ** Return: 0 Success
 **/

int _printf(const char *format, ...)
{
	char buffer[1024];
	unsigned int i, j, index;
	va_list print_list;
	find_pf_func pf_func[] = {
		{'c', copy_char},
		{'s', copy_string},
		{'%', copy_mod},
		{'\0', NULL}
	};

/* initialize print_list */
	va_start(print_list, format);

	index = 0;
	i = 0;
	clear_buff(buffer);

/* Print chars before first % and copy chars after % to copy */
	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[index] = format[i];
		}
		else
		{
			i++;
			j = 0;
			while (pf_func[j].input != '\0')
			{
				if (pf_func[j].input == format[i])
				{
					index = pf_func[j].f(print_list, buffer, index);
				}
				j++;
			}
		}
		i++;
		index++;
	}
	va_end(print_list);
	_strprint(buffer);
	clear_buff(buffer);
	return (index);
}


/**
 ** _strprint - print a string
 ** @str: pointer to string to print
 ** Return: void
 **/
void _strprint(char *str)
{
	int i;

	i = 0;
	if (*str != '\0')
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
}

/**
 ** clear_buff - sets buffer to 0
 ** @buffer: pointer to memory of buffer
 ** Return: void
 **/
void clear_buff(char *buffer)
{
	int i;
	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
}
