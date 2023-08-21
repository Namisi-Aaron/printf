#include "main.h"
/**
 * _strlen - returns the length of a string input
 * @str: the string input
 * Return: string length
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
