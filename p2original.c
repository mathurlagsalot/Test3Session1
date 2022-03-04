#include<stdio.h>

struct _fraction
{
  int num, den;
};
typedef struct _fraction
Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter the fraction: ");
  scanf("%d%d", &f.num, &f.den);
  return f;
}