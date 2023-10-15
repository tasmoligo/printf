#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struc fun_specifier
{
	char character;

	int *f_ptr(va_list);
} fun_t;

int _putchar(va_list);
int p_str(va_list);
int _printf(const char *format, ...);
#endif/* MAIN_H */
