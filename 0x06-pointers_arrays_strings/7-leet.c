#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)

	7
	Char *leet(char *s)
{
		Int a = 0, b = 0, l= s;
			Char r[5] = {‘A’, ‘E’, ‘O’, ‘T’, ‘L’};
				Char n[5] = {‘4’, ‘3’, ‘0’, ‘7’, ‘1’};
					While (s[a])
							{
										B = 0;
												While (b < l)
															{
																			If (s[a] == r[b] || s[a] – 32 == r[b])
																							{
																												S[a] = n[b];
																															}
																						b++;
																								}
														a++;
															}
						Return (s);
}

