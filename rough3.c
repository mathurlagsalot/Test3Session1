#include <stdio.h>

int num1, den1, num2, den2, num_sum, den_sum, smallest;

void input(){

    printf("Please enter the first fraction : ");
    scanf("%d/%d", &num1, &den1);

    printf("Please enter the second fraction : ");
    scanf("%d/%d", &num2, &den2);

}

void add() {

    num_sum = (num1 * den2) + (num2 * den1);
    den_sum = (den1 * den2);

    if (num_sum > den_sum) {
        smallest = den_sum;
    }
      
    else {
        smallest = num_sum;
    }
  
    for (int i = smallest; i > 1; i--) {

        if ((num_sum % i == 0) && (den_sum % i == 0)) {

            num_sum = num_sum / i;
            den_sum = den_sum / i;

        }

    }

}

void output() {

    printf("\nThe sum is %d/%d\n", num_sum, den_sum);

}

int main(void) {

    
    input();
    add();
    output();

}