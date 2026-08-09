#include <stdio.h>
int main()
{
     char str[] = "collage wallah!";
     printf("%c \n", str[0]); //* Accessing individual character 
     str[0] = 'm'; //* Modify individual character
     int i = 0;
     while(str[i]!='\0') {
          printf("%c", str[i]);
          i++;
     } return 0;
}