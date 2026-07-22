#include <Stdio.h>

int add(int a, int b){
     return a + b;
}
int main() {
     int a,b;
     printf("Enter 1st number: ");
     scanf("%d", &a);
     printf("Enter 2st number: ");
     scanf("%d", &b);

     int sum = add(a,b);
     printf("%d ", sum);
     return 0;
}