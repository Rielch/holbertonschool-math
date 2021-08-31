#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * complex - Represents an imaginary number
 * @re: Real part of the imaginary number
 * @im: Imaginary part of the imaginary number
 *
 * Description: Imaginary number
 */

typedef struct complex
{
  int re;
  int im;
} complex;

void display_complex_number(complex c);

#endif /* HOLBERTON_H */
