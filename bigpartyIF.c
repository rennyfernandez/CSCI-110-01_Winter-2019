#include <stdio.h>

    int main(void) {
        int howbig;
    
    
    printf("Hi welcome to our party..how big is your group ?\n\n\n");
    scanf("%d", &howbig);
    
    if( howbig>10) {
        printf("more than 10 ?? please be seated in our conference hall\n\n\n\n");
    }
    if (howbig<10 && howbig>5 ) {
        printf(" please be seated in our booth\n\n\n\n");
    }
    if (howbig<5 && howbig >2) {
        printf("please be seated in our table\n\n\n");
    }
    if (howbig <=2) {
        printf("sorry you are not allowed");
    }
    return 0;
    }
