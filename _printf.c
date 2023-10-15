#include "main.h"

/**
  * _printf - funtion that print to std out
  * @format: is a character string.
  * Return: number of characters written
  */

int _printf(const char *format, ...)
{
	int len = 0;
	char scan;
	va_list p_args;

	va_start(p_args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			scan = format[index];
			if (scan == 's' || scan == 'c' || scan == '%')
				len += (fun_checker(scan))(p_args);
		}
		else
		{
			write(1, &format[index], 1);
			len++;
		}
	}


	va_end(p_args)

	return (len);
}
