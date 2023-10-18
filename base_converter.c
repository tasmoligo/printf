#include "main.h"

/**
  * binary - convert to binary
  * @p_args: parameter
  * Return: nothing
  */

void binary(va_list p_args)
{
	int i = 0, j;
	char zero, k;
	int arr[1024];
	int num = va_arg(p_args, int);

	if (num == 0)
	{
		zero = '0';
		write(1, &zero, 1);
		return;
	}

	for (i = 0; num > 0; i++)
	{
		arr[i] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		k = arr[j] + '0';
		write(1, &k, 1);
	}
}
