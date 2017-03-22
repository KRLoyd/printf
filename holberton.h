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
char *_strcpy(char *dest, char *src);
void _strprint(char *str);
void clear_buff(char *buffer);
int copy_int(va_list print_list, char *buffer, int index);
void end_function(va_list print_list, char *buffer);
void * _realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *buff_realloc(char *buffer, int index);

#endif /* HOLBERTON_H */
