#ifndef MAIN_H
#define MAIN_H

#include<unistd.h>
#include<stdarg.h>
#include<stdio.h>

int _printf(const char *format, ...);
int our_putchar(char c);
int our_puts(const char *s);
int our_prinum(va_list ptr);
int binary_print(va_list ptr);

#endif

