#include "holberton.h"
#include <math.h>

/**
 * division - performs the division operation to complex numbers.
 * @c1: Struct type complex.
 * @c2: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/A.
 */
void division(complex c1, complex c2, complex *c3)
{
	double x, y, z;

	if (c2.re == 0 && c2.im == 0)
	{
		printf("Division b 0 + 0i isn't allowed.");
		return;
	}
	else
	{
		x = c1.re * c2.re + c1.im * c2.im;
		y = c1.im * c2.re - c1.re * c2.im;
		z = c2.re * c2.re + c2.im * c2.im;
		(*c3).re = x / z;
		(*c3).im = y / z;
	}
}
