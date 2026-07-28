#include <stdio.h>

int sum(int n) {
     if(n==0 || n==1) return n; 
     int result = n + sum(n-1);
     return result;
} 
int main()
{
     int n;
     printf("Enter a number: ");
     scanf("%d", &n);
     int ans = sum(n);
     printf("%d", ans);
     return 0;
}