#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - program entry point
 * @s: input
 * @accept: input
 * return: always 0 (success)
 */

char *_strpbrk(char *s, char *accept)

{	
	return (strpbrk(s, accept));

}

