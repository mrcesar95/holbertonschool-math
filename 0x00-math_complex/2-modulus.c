#include "holberton.h"
#include <math.h>

/**
 * modulus - returns the modulus of a given complex number.
 * @c: Struct type complex
 * Return: modulus of number complex.
 */

double modulus(complex c)
{
	double modulus = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (modulus);
}
