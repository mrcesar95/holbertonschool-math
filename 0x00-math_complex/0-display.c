#include "main.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: The alias
 *
 * Return: The complex number
 */
void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
		return;
	else if (c.im == 0) /* num im = 0 */
		printf("%.0f\n", c.re);
	else if (c.re == 0) /* Only print imagynary number*/
		printf("%.0fi\n", c.im);
	else if (c.im == -1) /*print only im*/
		printf("%0.f - i\n", c.re);
	else if (c.im < -1) /* imaginary is a negative number */
		printf("%.0f - %.0fi\n", c.re, (-c.im));
	else if (c.im == 1)
		printf("%0.f + i\n", c.re);
	else
		printf("%0.f + %0.fi\n", c.re, c.im);
}
