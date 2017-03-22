#include "holberton.h"

/**
 ** end_function - things to do at the end of the function
 ** @print_list: list of args passed to _printf
 ** @buffer: pointer to buffer
 **
 ** Return: void
 **/
void end_function(va_list print_list, char *buffer)
{
	va_end(print_list);
	_strprint(buffer);
	clear_buff(buffer);
}

/**
 ** buff_realloc - function to allocate more memory to buffer, if needed
 ** @buffer: pointer to buffer
 ** @index: element in buffer
 **
 ** Returns: pointer to buffer
 **/

char *buff_realloc(char *buffer, int index)
{
	char *temp_buff[10000000];
	int n;

	n = index;
	clear_buff(temp_buff);
	temp_buff = buffer;
	_realloc(buffer, n, (n * 2));
	buffer = temp_buff;
	clear_buff(temp_buff);
	return (buffer);
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
 ** _strprint - print a string
 ** @str: pointer to string to print
 ** Return: void
 **/
void _strprint(char *str)
{
	int i;

	i = 0;
	if (*str != '\0')
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
}
/**
 ** clear_buff - sets buffer to 0
 ** @buffer: pointer to memory of buffer
 ** Return: void
 **/
void clear_buff(char *buffer)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		buffer[i] = '\0';
	}
}

/**
 * _realloc - Entry Point
 * @ptr: pointer to previously allocated memory
 * @old_size: size of the array pointed to by ptr
 * @new_size: size of the array to be returned
 *
 * Description: reallocates a memory block using malloc and free
 * Return: pointer to reallocated memory, NULL if new_size == 0
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *help_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	help_ptr = ptr;
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new_ptr[i] = help_ptr[i];
	else /* if (old_size > new_size) */
		for (i = 0; i < new_size; i++)
			new_ptr[i] = help_ptr[i];
	free(ptr);
	return ((void *)new_ptr);
}
