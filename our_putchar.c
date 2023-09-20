#include "main.h"
/**
 * our_putchar - prints characters
 * @c: characters to be printed
 * Return: number of characters printed
 */
int our_putchar(char c)
{
return (write(1, &c, 1));
}
