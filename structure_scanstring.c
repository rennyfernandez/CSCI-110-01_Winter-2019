#include<stdio.h>
    struct renny {
        int number;
        char name[20];
    } r1[2];
    
    int main(void) {
        
    printf("enter your name");
    scanf("%[^\n]s", r1[1].name);
    printf("your name is : %s",r1[1].name);
    
    return 0;
}
