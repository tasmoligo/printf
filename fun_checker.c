#include "main.h"

/**
  * fun_checker - determine the function to use
  * @scan: conatins the specifiers
  * Return: the func call
  */

int (*fun_checker(scan))(va_list)
{
	int index = 0;

	fun_t array[] = {
		{'c', _putchar},
		{'s', p_str},
		{NULL, NULL}
	}

	for (; array[index].character != NULL; index++)
	{
		if (scan == array[index].character)
		{
			return (array[index].f_ptr);
		}
	}

	return (NULL);
}
