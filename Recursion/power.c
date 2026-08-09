#include <stdio.h>

int power(int a, int b) {
     if(b==0) return 1;
     int ans = a * power(a,b-1);
     return ans;
} 

int main()
{
     int a, b;
     printf("Enter a 1st number: ");
     scanf("%d", &a);
     printf("Enter a 2nd number: ");
     scanf("%d", &b);
     int p = power(a,b);
     printf("%d", p);
     return 0;
}