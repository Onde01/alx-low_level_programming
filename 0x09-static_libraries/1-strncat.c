#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - function concatenate two string using n bytes from src
 * @dest: entered value
 * @src:entered value
 * @n: entered value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	return (strncat(dest, src, n));

}

