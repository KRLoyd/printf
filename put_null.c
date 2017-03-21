#include "holberton.h"

/**
 ** put_null - function to save string "(null)" to buffer at specified index
 ** @buffer: buffer to copy to
 ** @index: index of buffer to copy to
 ** Return: index of buffer
 **/

int put_null(char *buffer, int index)
{
	char *str;
	int i;

	str = "(null)";
	for (i = 0; str[i] != '\0'; i++, index++)
	{
		buffer[index] = str[i];
	}
	return (index - 1);
}
