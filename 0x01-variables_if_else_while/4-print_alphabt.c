#include <stdio.h>
/**
 * main - print if number is positive, zero, or negative
 * Description: using the main function this program prints "programming is positive, zero, and negative"
 * Return: 0
 **/

int main(void)

{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		if (ch != 'e' && ch != 'q')

		{

			putchar(ch);

		}

	}

	putchar('\n');
	return (0);
}
