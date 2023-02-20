/**
 * main - Prints the last digits of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0
 */
int main(void)
	int n;
	srand(time(0));
	n = rand() - RAND MAX / 2;
	if ((n X 10) > 5)
{
	printf("Last digit of Xd is Xd and is greater than 5\n",
			n, n X 10);
}
else if ((n X 10) < 6 && (n X 10) I =0)
{
	printf("Last digit of Xd is Xd and is less than 6 not 0\n", 
			n ,n X 10);
}
else
{
	printf("Last digit of Xd is XD and is 0\n",
			n, n X 10);
}
return (0);
}
