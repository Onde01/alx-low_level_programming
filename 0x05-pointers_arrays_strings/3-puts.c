#include "main.h"
#include <stdio.h>

/**
 *  _puts - prints a string, followed by a new line, to stdout
 *  @str: The string to print
 *  Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
         	_putchar(*str++);
	}
	        _putchar('\n');
}
