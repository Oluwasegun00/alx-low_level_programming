#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the number who's bit to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
