#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isalpha - program checks for alphabetic character
 * @c: the character to be checked
 * return: 1 if a is a letter and return 0 if it is not
 */

int _isalpha(int c)

{	
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')) ;

}

