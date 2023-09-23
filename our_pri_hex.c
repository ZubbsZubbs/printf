#include "main.h"

/**
 * our_prihex - prints an hexadecimal numbers.
 * @ptr: arguments to function.
 * Return: r_val.
 */
int our_prihex(va_list ptr)
{
	int k;
	int *arr;
	int r_val = 0;
	unsigned int n = va_arg(ptr, unsigned int);
	unsigned int tmp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		r_val++;
	}
	r_val++;
	arr = malloc(r_val * sizeof(int));

	for (k = 0; k < r_val; k++)
	{
		arr[k] = tmp % 16;
		tmp /= 16;
	}
	for (k = r_val - 1; k >= 0; k--)
	{
		if (arr[k] > 9)
			arr[k] = arr[k] + 39;
		our_putchar(arr[k] + '0');
	}
	free(arr);
	return (r_val);
}
