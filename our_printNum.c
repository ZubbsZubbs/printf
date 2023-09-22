#include"main.h"
/**
* our_prinum - prints integer
* @ptr: pointer arguement to print
*
* Return: number of characters printed
*/
int our_prinum(va_list ptr)
{
	int num = va_arg(ptr, int);
	int temp, end = num % 10, output, divisor = 1;
	int  r_val = 0;

	num = num / 10;
	temp = num;

	if (end < 0)
	{
		our_putchar('-');
		temp = -temp;
		num = -num;
		last = -last;
		r_val++;
	}
	if (temp > 0)
	{
		while (temp / 10 != 0)
		{
			divisor = divisor * 10;
			temp = temp / 10;
		}

		temp = num;
		for (; divisor > 0; r_val++)
		{
			output = temp / divisor;
			our_putchar(output + '0');
			temp = temp - (output * divisor);
			divisor = divisor / 10;
		}
	}
	r_val += our_putchar(end + '0');
	r_val++;
	return (r_val);
}
