#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest:string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int dlen = 0, j = 0;
	while (dest[dlen]);
	{
		dlen++;
	}

	while (j < n && src[j])

	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = ‘\0’;

	return (dest);

}
