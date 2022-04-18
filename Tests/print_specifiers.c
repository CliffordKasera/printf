#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{
	unsigned int divisor = 1, i, resp, charPrinted = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		charPrinted++;
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (charPrinted);
}
/**
 * print_unsignedToBinary - prints an integer.
 * @arg: argument
 * Return: 0
 
int print_unsignedToBinary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int printed;

	print_binary(n, &printed);
	print_binary(n, &printed);

	return (printed);
}
**
 * print_STR - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 

int print_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (i < 16)
				_putchar('0');
			print_unsignedIntToHex(str[i], 'A');
		}
		else
			_putchar(str[i]);
	}
	return (i);
}*/
