#include <Stdio.h>

int main() {

     int n;
     printf("Enter a number: ");
     scanf("%d", &n);

     for(int i=1; i<=n; i++) {   //* number of lines -> number of row(outerloop)
          for(int j=1; j<=n+1-i; j++){   //* number of star of each line -> number of columns(innerloop)
               printf("* ");
          }
          printf("\n");
     }
     return 0;
}