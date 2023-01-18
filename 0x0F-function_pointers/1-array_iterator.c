#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: first element of an array of integers.
 * @size: size of the array
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if i(array == NULL || action == NULL)
		return;
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
