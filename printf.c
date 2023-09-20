#include "main.h"

/**
 * _printf - is a function that produces output according to a format.
 * @format: identifier to check for.
 *
 * Return: the length of each specifier.
 */

int _printf(const char *format, ...)
{
unsigned int h = 0;
int r_value = 0;
va_list args;
va_start(args, format);

for (; format[h] != '\0'; h++)
{
if (format[h] != '%')
{
our_putchar(format[h]);
}
else if (format[h + 1] == 'c')
{
r_value += our_putchar(va_arg(args, int));
h++;
}
else if (format[h + 1] == 's')
{
r_value += our_puts(va_arg(args, char *));
h++;
}
else if ((format[h + 1] == 'd') || (format[h + 1] == 'i'))
{
r_value += our_prinum(args);
h++;
}
else if (format[h + 1] == 'b')
{
r_value += binary_print(args);
h++;
}
r_value += 1;

}
va_end(args);
return (r_value - 2);
}
