#include <stdio.h>

int main(){

     int length, breath;
     printf("Enter a length: ");
     scanf("%d", &length);
     printf("Enter a breath: ");
     scanf("%d", &breath);

     int a = length * breath;
     int b = 2 * (length + breath);

     if(a>b) {
          printf("area is greater then perimeter");
     }else{
          printf("perimeter is greater then area");
     }
     return 0;
}