#include <stdio.h>

int main() {
    int n, r, c, totalCols;
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    totalCols = 2 * n - 1;   // total columns (n=4 -> 7)
    
    for (r = 1; r <= n; r++) {
        for (c = 1; c <= totalCols; c++) {
            if (c <= (n - r + 1) || c >= (n + r - 1))
                printf("%d", c);
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}