#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - program copy a string
 * @dest: input value
 * @arc: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{	
	return (strncpy(dest, src, n));

}

