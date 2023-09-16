#include "main.h"

/**
 * cap_string - Capitalize
 * @s: STRING
 * Return: new string
*/
char *cap_string(char *s)
{
	char *sp = " \t\n,;.!?(){}\"";
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++) /*loop on the string*/
	{
		for (j = 0; sp[j] != '\0'; j++) /*loop on sperators*/
		{
			if (sp[j] == s[i]) /*check if sperator equal str*/
			{
				i++;
				while (s[i] != '\0')
				{
					if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '1' && s[i] <= '9'))
						break;
					if (s[i] >= 'a' && s[i] <= 'z')
					{
						s[i] -= 32;
						break;
					}
				i++;
				}
				break;
			}
		}

	}
	return (s);
}
