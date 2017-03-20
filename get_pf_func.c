#include "holberton.h"

/** _pf_func - get correct _printf function
 ** @s: conversion specifier passed
 **
 **/

void (*get_pf_func(char s))(va_list)
{

	find_pf_func pf_func[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{NULL, NULL}
	};
	unsigned int i, j;

	i = 0;
	j = 0;

	while (pf_func[i].input != NULL)
	{
		if (s == pf_func[i].input)
		{
			return (pf_func[i].f);
			j++;
		}
		i++;
	}
	if (pf_func[i].input == NULL)
	{
		exit (98);
	}
}
