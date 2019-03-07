#include <stdio.h>
int main(void) {
    
    int a[6]={1,2,3,4,5,6};
    int forward;
    int i=0;
    int j;
    int size=5;
    
    for(j=0;j<=5;j++) {
        printf("%d\t", a[j]);
        printf("\n");
    }
    
    while(i<(size-i)) {
        forward=a[i];
        a[i]=a[size-i];
        a[size-i]=forward;
        i++;
    }
    for(j=0;j<=size;j++) {
        printf("%d\t", a[j]);
    }
    return 0;
    }

