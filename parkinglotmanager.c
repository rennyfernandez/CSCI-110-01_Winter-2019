#include<stdio.h>

int main(void) {
    
    int main, full, i;
    int capacity=5;
    char yesorno;
    int carnumber=0;
    int parklot[10]= {0};
    
    while(carnumber<capacity) {
            printf("do you want to park your car ?");
            scanf(" %c", &yesorno);
        
        if(yesorno=='y') {
            printf("your car number is %d\n", carnumber);
            parklot[carnumber]=1;
            printf("please park your car in lot number %d\n", carnumber);
            carnumber++;
        }
    }
    
    printf("Sorry...the parking lot is full..!\n");
    
    for(i=0; i<carnumber; i++) {
    printf("%d\t", parklot[i]); 
    }
   
    return 0;
}
