#include <stdio.h>

void mystartupFun(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */

void mystartupFun(void)

{

	printf(" You'are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
