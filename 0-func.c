#include "main.h"

/**
  * _putchar - print a character
  * @p_args: list of character
  * Return: 1 on success
  */

int _putchar(va_list p_args)
{
	char ch = va_arg(p_args, int);

	return (write(1, &ch, 1));
}

/**
  * p_str - print a string
  * @p_args: list of string to print
  * Return: 1 on success
  */

int p_str(va_list p_args)
{
	int len = 0, index = 0;
	char *str = va_arg(p_args, char *);

	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		len++;
		index++;
	}
	return (len);
}
