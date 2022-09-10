#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - evaluate if the number is positive, zero, or negative
 *
 * Description: to use main function
 *this program prints "programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	      printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
              printf("%i is zero\n", n);
	}
	else  (n < 0)
	{
	      printf("%i is negative\n", n);
	}
        return (0);

}
