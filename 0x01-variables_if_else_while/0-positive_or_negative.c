#include <stdlib.h>
#include <time.h>
/**
 * main - is the entry point of the program
 * Return : Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) 
	{
	printf ("%ui is positive\n",n)
	} else if (n == 0) 
	{
		printf ("%ui is zero\n",n)
	} else 
	{
		printf("%d is negative\n",n)
	}
	return (0);
}
