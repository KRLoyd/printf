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
		{'i', copy_int},
		{'d', copy_int},
		{'\0', NULL}
	};

/* initialize print_list */
	va_start(print_list, format);

	index = 0;
	i = 0;
	clear_buff(buffer);

	if (format == NULL)
	{
		return (0);
	}
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
	index = end_function(va_list print_list, char *buffer)
	return (index);
}
