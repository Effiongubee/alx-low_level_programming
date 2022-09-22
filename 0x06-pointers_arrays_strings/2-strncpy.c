#include "main.h"
#include <stdio>

/**
 * _strncpy - function that copies a string
 *
 * @dest: destination char
 *
 * @src: source char
 *
 * @n: number of bytes from src
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a = 0, b = 0;
	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	
	return (dest);
}
