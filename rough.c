#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the first numerator: ");
  scanf("%d", num1);
  printf("Enter the first denominator: ");
  scanf("%d", den1);
  printf("Enter the second denominator: ");
  scanf("%d", num2);
  printf("Enter the second denominator: ");
  scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *totalnum, int *totalden)
{
  int gcd;
  *totalnum = ((num1*den2)+(num2*den1));
  *totalden = (den1*den2);
  
  for(int i = 1 ; i<=*totalnum && i<=*totalden ; i++)
    {
      if(*totalnum%i==0 && *totalden%i==0)
        gcd = i;
    }
  printf("The fraction is %d/%d\n", *totalnum/gcd, *totalden/gcd);
}

void output(int num1, int den1, int num2, int den2, int totalnum, int totalden)
{
  int i = 0;
  int smallest = 0;
  if (totalnum>totalden)
    smallest = totalden;
  else
    smallest = totalnum;
  for (i = smallest ; i>1 ; i--)
    if (totalnum%i == 0 && totalden%i == 0)
      totalnum = totalnum/i;
      totalden = totalden/i;
  printf("The sum of the fractions %d/%d and %d/%d is %d/%d", num1, den1, num2, den2, totalnum, totalden);
}

int main()
{
  int num1, den1, num2, den2, totalnum, totalden;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&totalnum,&totalden);
  output(num1,den1,num2,den2,totalnum,totalden);
  return 0;
}