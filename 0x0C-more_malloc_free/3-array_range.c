#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: On success, the pointer to the newly created array.
 *         On failure, NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int my;

	if (min > max)
		return (NULL);
	my = max - min;

	arr = malloc(sizeof(int) * (my + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[my] = max;
		my--;
		max--;
	}
	arr[my] = min;
	return (arr);
}
