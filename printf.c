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

	while (copy != NULL && copy [i] != '\0' ++copy[i] != '%')
	{
		j = 0;

		while (pf_func[j].input != NULL)
		{
			if (copy[i] == pf_func[i].input)
			{
				pf_func[i].f(print_list)
			}
			j++;
		}
		i++
	}
	va_end(print_list);
	Return (0);
}

/**
** print_char - prints a character
** @copy: list of arguments passed
**/
void print_char(va_list copy)
{
	char x;
	x = va_arg(copy, int);
	_putchar(x);
}

/**
** print_string - prints a string
** @copy: list of arguments passed
**/
void print_string(va_list copy)
{
	char *x;
	x = va_arg(copy, char *);
	_puts(x);
}

/**
** _putchar - writes the character c to stdout
** @c: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
** _puts - function to print a string
** @str: string to print
**/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
