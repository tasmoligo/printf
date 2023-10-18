#include "main.h"

/**
  * adapter_func - convert print_number to int dtype
  * @p_args: list value
  * Return: 0
  */
int adapter_func(va_list p_args)
{
	print_number(p_args);
	return (0);
}

/**
  * binary_adapter - converts binary to int data type
  * @p_args: list value
  * Return: 0
  */
int binary_adapter(va_list p_args)
{
	binary(p_args);
	return (0);
}

/**
  * octal_adapter - converts binary to int data type
  * @p_args: list value
  * Return: 0
  */
int octal_adapter(va_list p_args)
{
	octal(p_args);
	return (0);
}
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
		{'d', adapter_func},
		{'i', adapter_func},
		{'b', binary_adapter},
		{'o', octal_adapter},
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
