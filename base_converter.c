#include "main.h"

void binary(va_list p_args)
{
	int i = 0, j;
	int arr[1024];
	int num = va_arg(p_args, int);

	if (num == 0)
	{
		_putchar(num);
		return;
	}

	for (i = 0; num > 0; i++)
	{
		arr[i] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
	}
}
