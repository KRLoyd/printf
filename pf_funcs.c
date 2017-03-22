#include "holberton.h"
/**
 ** copy_char - copies a character to buffer
 ** @print_list: list of arguments passed
 ** @buffer: pointer to buffer to copy to
 ** @index: specific index in buffer to copy to
 ** Return: index of newly copied character
 **/
int copy_char(va_list print_list, char *buffer, int index)
{
	int x;

	x = va_arg(print_list, int);

	if (x == '\0')
	{
		return (--index);
	}
	buffer[index] = x;
	return (index);
}
/**
 ** copy_string - copies a string to buffer
 ** @print_list: list of arguments passed
 ** @buffer: buffer to safe to
 ** @index: index in buffer to copy to
 ** Return: index of newly copied string
 **/
int copy_string(va_list print_list, char *buffer, int index)
{
	int i;
	char *x;
	char *null_str;

	null_str = "(null)";

	x = va_arg(print_list, char *);
	if (x == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++, index++)
		{
			buffer[index] = null_str[i];
		}
	}
	else
	{
		for (i = 0; x[i] != '\0'; i++, index++)
		{
			buffer[index] = x[i];
		}
	}
	return (index - 1);
}
/**
 ** copy_mod - copies the modulo character to buffer
 ** @print_list: list of arguments passed
 ** @buffer: buffer to copy to
 ** @index: index of buffer to copy to
 ** Return: index of newly copied modulo
 **/
int copy_mod(va_list print_list, char *buffer, int index)
{
	(void)print_list;
	buffer[index] = '%';
	return (index);
}
/**
 ** copy_unsigned_int - copies an int to buffer
 ** @print_list: list of arguments passed
 ** @buffer: buffer to copy to
 ** @index: index of buffer to copy to
 ** Return: index of newly copied int
 **/
/**
 * int copy_unsigned_int(va_list print_list, char *buffer, int index)
 *{
 *	int  b, div, len, last;
 *	unsigned long int n;
 *
 *	div = 1;
 *	len = 0;
 *	n = va_arg(print_list, int);
 *	last = n % 10;
 *
 *	n = n / 10;
 *
 *	/* find divisor
 *	b = n;
 *
 *	while (b > 0)
 *	{
 *	len += 1;
 *	div *= 10;
 *	b /= 10;
 *	}
 *	div /= 10;
 *
 * print the digits
 *	while (len >= 1)
 *	{
 *		buffer[index] = n / div + '0';
 *		n = n % div;
 *		div = div / 10;
 *		len--;
 *		index++;
 *	}
 *	buffer[index] = last + '0';
 *	return (index);
 *	}
*/

/**
 ** copy_int - copies an int to buffer
 ** @print_list: list of arguments passed
 ** @buffer: buffer to copy to
 ** @index: index of buffer to copy to
 ** Return: index of newly copied int
 **/
int copy_int(va_list print_list, char *buffer, int index)
{
	int last, div, b, len;
	int n;

	div = 1;
	len = 0;
	n = va_arg(print_list, int);
	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
		buffer[index] = '-';
		index++;
	}
	n = n / 10;
	if (n < 0)
	{
		n = n * -1;
	}
	b = n;

	while (b > 0)
	{
		len += 1;
		div *= 10;
		b /= 10;
	}
	div /= 10;
	while (len >= 1)
	{
		buffer[index] = n / div + '0';
		n = n % div;
		div = div / 10;
		len--;
		index++;
	}
	buffer[index] = last + '0';
	return (index);
}
