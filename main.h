#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * struct fun_specifier - typedef for struct
  * @character: the character
  * @f_ptr: the function pointer
  */

typedef struct fun_specifier
{
	char character;

	int (*f_ptr)(va_list);
} fun_t;

int _putchar(va_list);
int p_str(va_list);
int _printf(const char *format, ...);
void print_number(va_list);
void binary(va_list);
int (*fun_checker(char scan))(va_list);
int binary_adapter(va_list);
int adapter_func(va_list);

#endif/* MAIN_H */
