#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
/**
** find_pf_func - find the correct printf fucntion to use
** @input: input to determine type of printf function
** @f: specific printf function
**/
typedef struct find_pf_func
{
	char *input;
	void (*f) ();
}find_pf_func;
void (*get_pf_func(char *s))();
void print_char(va_list copy);
void print_string(va_list copy);
void print_mod();
int _putchar(char c);
void _puts(char *str);
#endif /* HOLBERTON_H */
