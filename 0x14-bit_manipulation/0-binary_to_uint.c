#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @s: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *s)
{
	unsigned int total, power;
	int length;

	if (s == NULL)
		return (0);

	for (length = 0; s[length]; length++)
	{
		if (s[length] != '0' && s[length] != '1')
			return (0);
	}

	for (power = 1, total = 0, length--; length >= 0; length--, power *= 2)
	{
		if (s[length] == '1')
			total += power;
	}

	return (total);
}
