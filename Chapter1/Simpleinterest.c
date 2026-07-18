#include <stdio.h>

int main(){      
     float p, r, t;
     
     printf("Enter p: ");
     scanf("%f", &p);

     printf("Enter Rate: ");
     scanf("%f", &r);

     printf("Enter time: ");
     scanf("%f", &t);

     float si = (p * r * t)/100;
     printf("%f", si);

     return 0;
} 