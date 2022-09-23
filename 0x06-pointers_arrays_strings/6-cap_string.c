#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)


{
	int a = 0, I;
	int cspc = 13;
	char spc[] = {32, ‘\t’, ‘\n’, 44, 46, '!', '?', '"', '(', ')', '{', '}'};
	while (s[a])
	{
		i = 0;
		while (I < cspc)
		{
			if ((a == 0 || s[a – 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
