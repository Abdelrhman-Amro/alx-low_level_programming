#include "main.h"

/**
 * wildcmp - compare with wild
 * @s1: string 1
 * @s2: string 2
 * Return: cmp done or not
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		s2 = next_c2(s2);
		return (wildcmp(next_c1(s1, *s2), s2));
	}
	else
		return (0);
}

/**
 * next_c2 - search for next c
 * @s2: string 2
 * Return: address for next character
*/
char *next_c2(char *s2)
{
	if (*s2 != '*')
		return (s2);
	return (next_c2(s2 + 1));
}

/**
 * next_c1 - search for c2
 * @s1: string 1
 * @c2: character 2
 * Return: address for first occurance of c2
*/
char *next_c1(char *s1, char c2)
{
	if (*s1 == c2 || *s1 == '\0')
		return (s1);
	return (next_c1(s1 + 1, c2));
}
