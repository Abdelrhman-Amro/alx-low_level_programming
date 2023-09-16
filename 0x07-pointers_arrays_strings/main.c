#include "main.h"

int main ()
{
    char main_string[50] = "Hello, how's the weather today?";
    char search_string[30] = "";
    
    char *found_string = _strstr(main_string, search_string);
    
    if (found_string == NULL)
    {
        printf ("Substring not found in the string");
    } 
    else
    {
        printf ("Substring located -> %s\n", found_string);
    }
    printf ("%s  -  %s\n", main_string, search_string);

    return 0;
}
