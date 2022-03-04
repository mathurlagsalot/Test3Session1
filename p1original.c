#include<stdio.h>


void input(int *num1,int *den1,int *num2,int *den2){
  printf("enter first numerator: ");
  scanf("%d",num1);
  printf("enter the first denominator: ");
  scanf("%d",den1);
  printf("enter the second numerator: ");
  scanf("%d",num2);
  printf("enter the second denominator: ");
  scanf("%d",den2);
}

void add(int num1,int den1,int num2,int den2,int *num_sum,int *den_sum)
{
    int smallest;
    *num_sum = (num1 * den2) + (num2 * den1);
    *den_sum = (den1 * den2);

    if (*num_sum > *den_sum) {
        smallest = *den_sum;
    }
      
    else {
        smallest = *num_sum;
    }
  
    for (int i = smallest; i > 1; i--) {

        if ((*num_sum % i == 0) && (*den_sum % i == 0)) {

            *num_sum = *num_sum / i;
            *den_sum = *den_sum / i;

        }

    }
}

void output(int num1,int den1,int num2,int den2,int num_sum,int den_sum){
  printf("the sum of %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num_sum,den_sum);
}

int main(){
  int num1,den1,num2,den2,num_sum,den_sum;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num_sum,&den_sum);
  output(num1,den1,num2,den2,num_sum,den_sum);
  return 0;
}