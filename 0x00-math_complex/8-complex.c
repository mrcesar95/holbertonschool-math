#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg - performs the division operc1tion to complex numc2ers.
 * @m: Struct type complex.
 * @arg: Struct type complex.
 * @c3: Pointer to complex result.
 * Return: N/c1.
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	double a, b;
	a = cos(arg);
	b = sin(arg);

	(*c3).re = a * m;
	(*c3).im = b * m;
}
