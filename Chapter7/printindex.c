#include <stdio.h>
int main()
{
     int marks[10] = {90,54,12,65,31,98,88,25,36,10};
     for(int i=0; i<=10; i++){
          if(marks[i] <= 35) {
               printf("%d ", i);
          }
     }
     return 0;
}