#include <stdio.h>

int main(){
     float r;
     printf("Enter radius: ");
     scanf("%f", &r);
     float pi = 3.14;
     float area = pi * r * r;
     printf("The area of circle is: %f", area);
     return 0;
}