#include "holberton.h"

/**
 * display_complex_number - Prints the representation of a complex number
 *
 * @c: complex number
 * Return: Void
 */

void display_complex_number(complex c)
{
  printf("%d", c.re);
  if (c.im)
    {
      if (c.im > 0)
	{
	  printf(" + ");
	}
      else
	{
	  printf(" - ");
	}
      printf("%d", c.im);
    }
  printf("\n");
}
