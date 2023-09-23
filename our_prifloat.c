#include "main.h"

/**
* our_prifloat - prints float and integer values
* @ptr:  argument to function
* Return: number of characters printed
*/

int our_prifloat(va_list ptr)
{
int num = va_arg(ptr, int);
int val, end = num % 10, divisor;
int  r_val = 1;
int mul = 1;

num = num / 10;
val = num;

if (end < 0)
{
our_putchar('-');
val = -val;
num = -num;
end = -end;
r_val++;
}
if (val > 0)
{
while (val / 10 != 0)
{
mul = mul * 10;
val = val / 10;
}
val = num;
while (mul > 0)
{
divisor = val / mul;
our_putchar(divisor + '0');
val = val - (divisor * mul);
mul = mul / 10;
r_val++;
}
}
our_putchar(end + '0');

return (r_val);
}

