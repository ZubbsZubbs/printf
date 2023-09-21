#include "main.h"
/**
* _printf - is a function that produces output according to a format.
* @format: identifier to check for.
* Return: the length of each specifier.
*/
int _printf(const char *format, ...)
{
unsigned int h = 0;
int r_value = 0;
va_list args;
va_start(args, format);
if (format == NULL || format[0] == '\0')
return (-1);
for (; format[h] != '\0'; h++)
{
switch (format[h])
{
case '%':
h++;
switch (format[h])
{
case 'c':
r_value += our_putchar(va_arg(args, int));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
r_value += our_puts("(null)");
else
r_value += our_puts(str);
break;
}
case 'd':
case 'i':
r_value += our_prinum(args);
break;
case 'b':
r_value += binary_print(args);
break;
case '%':
r_value += our_putchar('%');
break;
default:
r_value += our_putchar('%');
break;
}
break;
default:
r_value += our_putchar(format[h]);
break;
}
}
va_end(args);
return (r_value);
}

