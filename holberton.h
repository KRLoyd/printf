#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
/**
** struct find_pf_func - struct
** @input: input to determine type of printf function
** @f: specific printf function
**
** Description: the the correct copy function to use
**/
typedef struct find_pf_func
{
	char input;
	int (*f)();
} find_pf_func;
int copy_char(va_list print_list, char *buffer, int index);
int copy_string(va_list print_list, char *buffer, int index);
int copy_mod(va_list print_list, char *buffer, int index);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *);
char *_strcpy(char *dest, char *src);
void _strprint(char *str);
void clear_buff(char *buffer);
int put_null(char *buffer, int index);
#endif /* HOLBERTON_H */
