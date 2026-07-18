#include <stdio.h>

int main() {

     int a,b,c;
     printf("Enter a 1st number: ");
     scanf("%d", &a);
     printf("Enter a 2nd number: ");
     scanf("%d", &b);
     printf("Enter a 3rd number: ");
     scanf("%d", &c);

     if(a > b) {   // b is out of race
          if(a > c) {
               printf("%d is greatest", a);
          }else {  //a < c
               printf("%d is greatest", c);
          }
     }else {    // b > a
          if(b > c) {
               printf("%d is greatest", b);
          } else {  // c > b
               printf("%d is greatest", c);
          }
     }
     return 0;
}