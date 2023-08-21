#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: string input
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, len, j;
	char *str;
	char ch;
	va_list(args);

	va_start(args, format);
	len = _strlen(format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				_putchar('%');
			else if (format[i] == 'c')
			{
				ch = va_arg(args, int);
				_putchar(ch);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				for (j = 0; str[j] != '\0'; j++)
					_putchar(str[j]);
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(args);

	return (len);
}
