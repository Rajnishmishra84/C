#include <stdio.h>

int main() {
    int n;
    printf("Enter a row number: ");
    scanf("%d ", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            char ch = 'A';
            for (int j = 0; j < i; j++) {
                printf("%c ", ch + j);
            }
        }
        printf("\n");
    }
    return 0; 
}
