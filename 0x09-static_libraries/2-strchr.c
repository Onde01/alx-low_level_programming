#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - program entry point
 * @s: input value
 * @c: input value
 * return: always 0 (success)
 */

char *_strchr(char *s, char c)

{	
	return (strchr(s, c));

}

