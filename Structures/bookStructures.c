#include <stdio.h>
#include <string.h>

int main(){
     
     struct books 
     {
        char name[100]; 
        int noOfPages;
        float price;

     } a,b,c ;

     //* user Input 
     printf("Enter noOfPages: ");
     scanf("%d", &a.noOfPages);
     printf("Enter price: ");
     scanf("%f", &a.price);
     printf("Enter name: ");
     scanf(" %[^\n]", a.name);
     
     printf("%d\n", a.noOfPages);
     printf("%f\n", a.price);
     printf("%s\n", a.name);

     printf("\n");


     b.noOfPages = 1000;
     b.price = 500.00;
     strcpy(b.name,"Famous five");
     
     printf("%d\n", b.noOfPages);
     printf("%f\n", b.price);
     printf("%s\n", b.name);

     return 0;
}

 
// char ch[13];
// strcpy(ch,'Secret Seven');
// printf("%s", ch);