#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - program checks for lowercase character
 * @c: the character to check
 * return: 1 if c is lowercase, and 0 if it is not
 */

int _islower(int c)

{

	return (c >= 'a' && c <= 'z');

}
