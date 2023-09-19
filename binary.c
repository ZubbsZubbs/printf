#include "main.h"

/**
 * binary_print - prints a binary number.
 * @ptr: arguments to function.
 * Return: r_val.
 */
int binary_print(va_list ptr)
{
	int flg = 0;
	int r_val = 0;
	int h = 0, j = 1, k;
	unsigned int val = va_arg(ptr, unsigned int);
	unsigned int s;

	while (h < 32)
	{
		s = ((j << (31 - h)) & val);
		if (s >> (31 - h))
			flg = 1;
		if (flg)
		{
			k = s >> (31 - h);
			our_putchar(k + 48);
			r_val++;
		}
		h++;
	}
	if (r_val == 0)
	{
		r_val++;
		our_putchar('0');
	}
	return (r_val);
}
