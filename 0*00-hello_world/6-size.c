#include <stdio.h>
/**
 * main - A Program that print the size of all types of computer
 * Return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: Xlu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of an int: Xlu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long int:Xlu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a long long int:byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a float:byte(s)\n",(unsigned long)sizeof(f)),
return (0);
}



