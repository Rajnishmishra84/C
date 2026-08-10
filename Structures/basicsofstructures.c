//! In C, a structure (often called a struct) is a user-defined data type that allows you to 
//! group together logically related variables of different data types under a single name. 
//! Unlike an array, which can only hold elements of the same data type, a structure can 
//! store a mix of types like int, float, char, and arrays. The individual variables inside 
//! a structure are known as its members or fields....



#include <stdio.h>
int main()
{
     struct pokemon{ // user define data type
          int hp;
          int speed;
          int attack;
          char tier; // S,B,C,D,G
     };


     struct pokemon pikachu; 
     //*input 
     printf("Enter attack of pikachu: ");
     scanf("%d", &pikachu.attack); 

     // pikachu.attack = 60;

     pikachu.hp = 50;
     pikachu.speed = 100;
     pikachu.tier = 'A';


     struct pokemon charizard;
     charizard.attack = 130l;
     charizard.hp = 10;
     charizard.speed = 90;
     charizard.tier = 'S';


     struct pokemon mewtwo;
     mewtwo.attack = 170;
     mewtwo.hp = 150;
     mewtwo.speed = 200;
     mewtwo.tier = 'G';
     


     printf("Attack of pikachu: %d ", pikachu.attack);
     return 0;
}