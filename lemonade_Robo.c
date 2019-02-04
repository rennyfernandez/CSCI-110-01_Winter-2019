#include<stdio.h>

int main() {
   char userName[8]; int howMany; float priceofLemonade, total, change;
   priceofLemonade=0.5;
    
   printf("Hi, I am the Lemonade Robo ! What your name\n");
   scanf("%s",userName);
   printf("Hi, %s. How many glasses of lemonade do you want to buy\n?", userName);
   scanf("%d", &howMany);
   total= howMany*priceofLemonade;
   printf("Great !. %d glasses will cost you just $ %0.1f\n", howMany, total);
   printf("here is a $20 bill\n");
   change=20-(total);
   printf("here is your $%f change back\n", change);
   printf("thanks for visiting my lemonade stand\n");
   
return 0;

}
