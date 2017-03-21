#include "holberton.h"

/**
 * main - custom main file to test for my _printf()
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);

	len = printf("'c': %c char 1024: %c\n", 'c', 1024);
	len2 = _printf("'c': %c char 1024: %c\n", 'c', 1024);
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);


	len = printf("'string': %s NULL: %s\n", "string", "\0");
	len2 = _printf("'string': %s NULL: %s\n", "string", "\0");
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);

	len = printf("percent: %%\n");
	len2 = _printf("percent: %%\n");
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);
/* 	len = printf("percent: %% & unknown directive: %y, %%%\n");
	_printf("percent: %% & unknown directive: %y, %%%\n");
	printf("Len :[%d]\n", len);*/

	len = printf("integer: %d, NULL: %d\n", 1024, '0');
	len2 = _printf("integer: %d, NULL: %d\n", 1024, '0');
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);

	len = printf("integer: %i, NULL: %i\n", 1024, '0');
	len2 = _printf("integer: %i, NULL: %i\n", 1024, '0');
	printf("Len :[%d]\n", len);
	_printf("Len :[%d]\n", len2);

	return (0);
/* (EXPECTED for test case %y) warning: unknown conversion type character ‘y’ in format */
}
