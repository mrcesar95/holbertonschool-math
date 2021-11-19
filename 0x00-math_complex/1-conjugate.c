#include "holberton.h"

/**
 * Conjugate - returns the conjugate of a given complex number.
 * @c: Struct type complex
 * Return: Struct type complex.
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
