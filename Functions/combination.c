#include <stdio.h>

int factorial(int x) {
     int fact = 1;
     for(int i=2; i<=x; i++) {
          fact = fact*i;
     } 
     return fact;
}
int main (){
     int n,r;
     printf("Enter n: ");
     scanf("%d", &n);
     printf("Enter r: ");
     scanf("%d", &r);

     int nrc = factorial(n) / (factorial(r)*factorial(n-r));
     printf("Combination= %d", nrc);
     return 0;
}