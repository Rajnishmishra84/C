#include <stdio.h>

int main() {

     int a = 75;
     int *ptr = &a;
     printf("The address of pointer to a is: %p\n", &ptr);  // address of ptr...
     printf("The address of a is: %p\n", &a);
     printf("The address of a is: %p\n", ptr);
     printf("The value of a is: %d\n", *ptr);
     printf("The value of a is: %d", a);
     return 0;
}
