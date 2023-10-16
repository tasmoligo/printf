#include "main.h"

/**
  * fun_checker - determine the function to use
  * @scan: contains the specifiers
  * Return: the func call
  */

int (*fun_checker(char scan))(va_list)
{
	int index;

	fun_t array[] = {
		{'c', _putchar},
		{'s', p_str},
		{'\0', NULL}
	};

	for (index = 0; array[index].character != '\0'; index++)
	{
		if (scan == array[index].character)
		{
			return (array[index].f_ptr);
		}
	}

	return (NULL);
}
