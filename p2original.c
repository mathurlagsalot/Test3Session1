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

Fraction find_smallest(Fraction f1, Fraction f2, Fraction f3)
{
  int common_den = f1.den * f2.den * f3.den;
  int num1 = f1.num * common_den / f1.den;
  int num2 = f2.num * common_den / f2.den;
  int num3 = f3.num * common_den / f3.den;

  if (num1 < num2 && num1 < num3)
    return f1;

  else if (num2 < num3)
    return f2;

  else
    return f3;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("The smallest of %d/%d, %d/%d, %d/%d is %d/%d", f1. num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}

int main()
{
  Fraction f1, f2, f3, smallest;
  f1 = input_fraction();
  f2 = input_fraction();
  f3 = input_fraction();
  smallest = find_smallest(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}
