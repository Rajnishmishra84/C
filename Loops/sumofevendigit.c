#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)     //Ye line negative numbers ko positive banane ke liye use hoti hai.
        num = -num;   

    while (num != 0) {
        digit = num % 10;    //extracts the last digit.

        if (digit % 2 == 0) {
            sum = sum + digit;
         }

        num = num / 10;    //removes the last digit
     }  

    printf("Sum of even digits = %d\n", sum);

    return 0;
}