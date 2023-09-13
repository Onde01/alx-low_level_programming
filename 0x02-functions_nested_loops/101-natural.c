#include <stdio.h>
#include "main.h"

/**
 * natural numbres - Print natural numbers below 10 that are multiple of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)

{

int sum = 0;
int i;

for (i = 0; i < 10; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
}
