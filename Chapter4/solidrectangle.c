#include <Stdio.h>

int main() {

     int n;
     printf("Enter number of rows: ");
     scanf("%d", &n);

     int m;
     printf("Enter number of col: ");
     scanf("%d", &m);

     for(int i=1; i<=n; i++) {   //* number of lines -> number of row(outerloop)
          for(int j=1; j<=m; j++){   //* number of star of each line -> number of columns(innerloop)
               printf("* ");
          }
          printf("\n");
     }
     return 0;
}