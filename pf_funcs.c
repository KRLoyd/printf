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
	char x;
	x = va_arg(print_list, int);
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
	x = va_arg(print_list, char *);
	for (i = 0; x[i] != '\0'; i++, index++)
	{
		buffer[index] = x[i];
	}
	return (index - 1);
}

/**
 ** copy_mod - copies the modulo character to buffer
 ** @print_list: list of arguments passed
 ** @buffer: buffer to copy to
 ** @index: index of buffer to copy to
 ** Return: indexx of newly copied modulo
 **/
int copy_mod(va_list print_list, char *buffer, int index)
{
	(void)print_list;
	buffer[index] = '%';
	return (index);
}

/**
 ** print_string - prints a string
 ** @copy: list of arguments passed
 **/
/* void print_string(va_list copy)
{
	char *x;
	x = va_arg(copy, char *);
	_puts(x);
	}*/
