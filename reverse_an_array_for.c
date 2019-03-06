#include <stdio.h>

int main(void) {
    
    int myarray[5]= {1,2,3,4,5};
    int reversearray[5];
    int i,j;
    int k=0;
    for (i=4;i>=0; i--) {
        reversearray[k]=myarray[i];
        k++;
    }
    for(j=0;j<5;j++) {
    printf("reverse array[%d]: %d\n", j, reversearray[j]);
    }
    
    return 0;
