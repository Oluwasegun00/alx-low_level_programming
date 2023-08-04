#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number (0's and 1's).
 *
 * Return: The converted unsigned int value.
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int decimal_value = 0;

    // Check if the input string is NULL
    if (!b)
        return 0;

    // Loop through the binary string and convert to decimal value
    for (i = 0; b[i]; i++)
    {
        // Check if the character is not '0' or '1'
        if (b[i] < '0' || b[i] > '1')
            return 0; // Return 0 if the string contains non-binary characters

        // Convert the binary digit to its decimal value and accumulate
        decimal_value = (decimal_value << 1) + (b[i] - '0');
    }

    return decimal_value;
}
