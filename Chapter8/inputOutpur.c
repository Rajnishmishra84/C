#include <stdio.h>
#include <String.h>
int main()
{
     // char str[] = "Hello! Good Morning";
     // printf("%s", str);
     // puts(str);


     char str[40];
     // scanf("%s ", str); //* only the first word will be considered...
     gets(str); //* Entire sentence can be input 
     printf("Your input was: %s ", str);
     return 0;
}