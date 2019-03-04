#include<stdio.h>
#define SIZE 4
int main(void) {
    
    int numbers[SIZE];
    int i;
    
    printf("enter a random number between 1 and 10\n");
    scanf("%d", &numbers[0]);
    
    printf("enter a random number between 1 and 10\n");
    scanf("%d", &numbers[1]);
    
    printf("enter a random number between 1 and 10\n");
    scanf("%d", &numbers[2]);
    
    printf("enter a random number between 1 and 10\n");
    scanf("%d", &numbers[3]);
    
    printf("enter a random number between 1 and 10\n");
    scanf("%d", &numbers[4]);
    
    printf( "the numbers are :");
 
    while(i <= SIZE) {
     printf("the index is %d and the number is %d\n", i, numbers[i]);
     i++;
 } 
 return 0;
}
