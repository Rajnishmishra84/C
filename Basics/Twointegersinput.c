#include <stdio.h>

int main(){
     int a,b;  // a > b;
     printf("Enter Dividend: ")
     scanf("%d", &a);
     printf("Enter Divisor: ");
     scanf("%d", &b);

     // q = a / b;
     // int r = a - b * q; //* Divisor * Quotient + Remainder = Dividend
     // printf("The remainder when %d is dividend by %d is: %d", a,b,r);

     int r = a % b;
     printf("The remainder when %d is dividend by %d is: %d", a,b,r);

     return 0;
}

//* a % b = a  [a<b]