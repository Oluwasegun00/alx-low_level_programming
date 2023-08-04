#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number whose bit to change
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
