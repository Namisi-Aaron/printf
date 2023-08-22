#include "main.h"
#include <stdio.h>
/**
 * print_int - prints an integer
 * @num: number to be printed
 * Return: the number of characters printed
 */
int print_int(int num)
{
	char buffer[BUF_SIZE];
	int num_printed, i;

	num_printed = snprintf(buffer, sizeof(buffer), "%d", num);
	for (i = 0; i < num_printed; i++)
		_putchar(buffer[i]);
	return (num_printed);
}
