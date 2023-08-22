#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: string input
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int print_chara, integer;
	va_list myList_args;
	int length_string;
	char ch;
	char *myString;

	print_chara = 0;
	length_string = 0;
	if (format == NULL)
	{
		return (-1);
	}

	va_start(myList_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_chara++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				print_chara++;
			}
			else if (*format == 's')
			{
				myString = va_arg(myList_args, char *);
				while (myString[length_string] != '\0')
				{
					length_string++;
				}
				write(1, myString, length_string);
				print_chara += length_string;
			}
			else if (*format == 'c')
			{
				ch = va_arg(myList_args, int);
				write(1, &ch, 1);
				print_chara++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				integer = va_arg(myList_args, int);
				print_chara += print_int(integer);
			}
		}
		format++;
	}
	va_end(myList_args);
	return (print_chara);
}
