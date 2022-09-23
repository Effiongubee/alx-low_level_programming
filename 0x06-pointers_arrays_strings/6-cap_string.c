#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)


{
		Int a = 0, I;
			Int cspc = 13;
				Char spc[] = {32, ‘\t’, ‘\n’, 44, 46, ‘!’, ‘?’, ‘”’, ‘(‘, ‘)’, ‘(‘, ‘)’};
					While (s[a])
							{
										I = 0;
												While (I < cspc)
															{
																			If ((a == 0 || s[a – 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
																								S[a] -= 32;
																						I++;
																								}
														A++;
															}
}

