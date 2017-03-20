#include "holberton.h"

/** find_pf_func - get correct _printf function
 ** @s: conversion specifier passed
 **
 **/

void (*get_pf_func(char *s))()
{

	find_pf_func pf_func = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{NULL, NULL}
	};
	unsigned int i;

	while (pf_func[i].input != NULL)
	{
		if (s == pf_func[i].input)
		{
			return (pf_func[i]).f(print_list);
		}
		i++;
	}
	if (pf_func[i].input == NULL)
	{
		exit (98);
	}
}
