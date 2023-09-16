#include "main.h"

/**
 * cap_string - Capitalize
 * @str: STRING
 * Return: new string
*/
char *cap_string(char *str)
{
	char *sp = " \t\n,;.!?(){}\"";
	int i , j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
		
	for (i = 0; str[i] != '\0'; i++) /*loop on the string*/
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) /*check if letter*/
			continue;
		else
		{
			for (j = 0; sp[j] != '\0'; j++) /*loop on sperators*/
			{
				if (sp[j] == str[i]) /*check if sperator equal str*/
				{
					i++;
					while (str[i] != '\0' && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
					{
						if (str[i] >= 'a' && str[i] <= 'z')
						{
							str[i] -= 32;
							break;
						}
						i++;
					}
					break;
				}
			}

		}
	}
	return (str);
}
