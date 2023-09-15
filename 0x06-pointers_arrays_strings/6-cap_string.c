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

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            continue;
        else
        {
            for (j = 0; sp[j] != '\0'; j++)
            {
                if (sp[j] == str[i])
                {
                    i++;
                    while (str[i] != '\0' && (str[i] < 'A' || str[i] > 'Z'))
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
