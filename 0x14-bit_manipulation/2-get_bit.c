#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: index of the bit (0)
 *
 * Return: value of the bit at the specified index (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
