#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int numVals;
    int* userVals = NULL;
    int i;
    printf("enter the number of integers that you will need");
    scanf("%d", &numVals);
    
    userVals= (int*)malloc(numVals*sizeof(int));
    
    printf("Enter %d  values \n", numVals);
    for(i=0; i<numVals; ++i) {
        printf("Value:");
        scanf("%d", &(userVals[i]));
    }
    
    printf("you entered");
    for(i=0; i<numVals; ++i) {
        printf("%d\t", userVals[i]);
    }
    free(userVals);
    return 0;
}
