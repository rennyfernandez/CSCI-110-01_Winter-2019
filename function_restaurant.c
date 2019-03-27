#include<stdio.h>

int main(void) {
    int choice;
    
    while(choice!=4) {
        
    printf("welcome to our restaurant. Enter your choice(1/0)\n");
    scanf("%d", &choice);
    
    if(choice==1) {
        breakfast();
    }
    
    if(choice==0) {
        lunch();
    }
    
    else if(choice==4){
        printf("Bye Bye");
        break;
    }
    }
    return 0;
    }
    
    breakfast() {
        missionstatement();
        printf("Good Morning\n");
        printf("Coffee...........$3.5\n");
        printf("Doughnut...........$1.5\n");
        printf("Bagel w/creamcheese...............$2.5\n");
    }
    lunch() {
        missionstatement();
        printf("Pizza............$3.5\n");
        printf(" Sandwich.........$5\n");
        printf("Burrito...........$6\n");
    }
    
    missionstatement() {
        printf("My restaurant dont rock anymore\n");
    }
