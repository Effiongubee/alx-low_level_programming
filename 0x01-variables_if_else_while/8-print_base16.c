#include <stdio.h>
/**
 * main - print if the number is positive , zero,or negative
 * Description: using the main function
 * this program prints programming is postive, zero, or negative
 * Return: Always 0 (success)
 **/

int main(void)

{

	char c;

	for (c = '0'; c <= '9'; c++)

	{

		putchar(c);

	}

	for (c = 'a'; c <= 'f'; c++)

	{

		putchar(c);

	}

	putchar('\n');
	return (0);
}
