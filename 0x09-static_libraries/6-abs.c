#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _abs - program computes the absolute value of an integer
 * @n: the integer to check
 * return: the absolute value of integer
 */

int _abs(int n)

{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);

}

