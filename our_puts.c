#include"main.h"
/**
* our_puts - prints strings
* @s: strings to be printed
* Return: number of characters printed
*/

int our_puts(const char *s)
{

	int r_val = 0;
	int k = 0;

	if (s)
	{
		while (s[k] != '\0')
		{
			our_putchar(s[k]);
			r_val += 1;
			k++;
		}
	}
	our_putchar('\n');
	return (r_val);
}
