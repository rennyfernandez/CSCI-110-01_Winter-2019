#include<stdio.h>

int main(void) {
    int choice;
    int x=0;
    
    while(choice != 4) {
        
    printf("enter a choice from 1-3 or enter  4 to exit\n");
    scanf("%d", &choice);
    if (choice==1) {
        printf("your choice was 1\n");
        x=x+1;
        printf("x is now x+1\n");
        break;
    }
    if(choice==2) {
        printf("your choice was 2\n");
        x=x+2;
        printf("x is now x+2\n");
        break;
    }
    if(choice==3) {
        printf("your choice was 3\n");
        x=x+3;
        printf("x is now x+3\n");
        break;
    }
    if(choice==4) {
        printf("your choice was to exit by entering 4\n");
        break;
    }
    else {
        printf("your choice was not 1,2 3 or 4\n");
    }
    }
        return 0;

}
