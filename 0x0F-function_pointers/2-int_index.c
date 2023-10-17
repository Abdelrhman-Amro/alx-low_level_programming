#include "function_pointers.h"

/**
 * int_index - search for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: function to execute
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array && size > 0 && cmp)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return (i);
        }
    }
    return (-1);
}
