#include <stdio.h>

int main(){
     int num1, num2;
     printf("Enter your 1st number: ");
     scanf("%d", &num1);
     printf("Enter your 2nd number: ");
     scanf("%d", &num2);

     int sum = num1 + num2;
     printf("Sum of two number is: %d", sum);
     return 0;
}