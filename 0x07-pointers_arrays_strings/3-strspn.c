#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int s_index, a_index, match_count, character_found;

	match_count = 0;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		character_found = 0;
		for (a_index = 0; accept[a_index] != '\0'; a_index++)
		{
			if (s[s_index] == accept[a_index])
			{
				match_count++;
				character_found = 1;
			}
		}
		if (character_found == 0)
		{
			return match_count;
		}
	}

	return 0;
}
