#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - program entry point
 * @haystack: input
 * @needle: input
 * return: always 0 (success)
 */

char *_strstr(char *haystack, char *needle)

{	
	return (strstr(haystack, needle));

}

