#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates ints
 * @min: minimum num
 * @max: maximum mun
 * Return: array ss
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
