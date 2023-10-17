#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array.
 * @array: Array
 * @size: size of the Array
 * @action: function to execute
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
