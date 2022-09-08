#include <stdio.h>
/**
 * main - print the string function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multillingual puzzle"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(li));
	printf("size of long long int: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return(0);
}
