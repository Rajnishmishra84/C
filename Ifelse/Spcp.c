#include <stdio.h>

int main() {

     int cp;
     printf("Enter cost price: ");
     scanf("%d", &cp);

     int sp;
     printf("Enter selling price: ");
     scanf("%d", &sp); 

     if(sp>cp){
          printf("Profit");
     }if(sp<cp) {
          printf("Loss");
     }else {
          printf("No Profit, Not Loss");
     }
       
     return 0;
}