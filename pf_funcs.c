#include "holberton.h"

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
 ** print_mod - prints the modulo character
 ** @copy: list of arguments passed
 **/
void print_char()
{
	_putchar('%');
	_putchar('\n');
}

/* /**
 ** print_string - prints a string
 ** @copy: list of arguments passed
 **/
/* void print_string(va_list copy)
{
	char *x;
	x = va_arg(copy, char *);
	_puts(x);
	}*/
