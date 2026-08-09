#include <stdio.h>

int main() {

     int a, b;
     printf("Enter 1st number: ");
     scanf("%d", &a);
     printf("Enter 2nd number: ");
     scanf("%d", &b);

     int power = 1;
     for(int i=1; i<=b; i++){
          power = power * a;
     }
     printf("%d raised the power %d is: %d ",a,b,power); 
     return 0;
     
}