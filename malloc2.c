#include<stdio.h>
#include<stdlib.h>

int main(void) {
    
    int *iptr = NULL;
    int sum=0;
    int i, n;
    int *temp;
    printf("enter how many values you are gonna store\n");
    scanf("%d", &n); //user input for number of values
    
    iptr =  (int*)malloc(n*sizeof(int)); //dynamic memory
    
    /*printf("enter %d numbers\n", n);
    for(i=0; i<n; i++) {
        printf("enter %d\t", i);
        scanf("%d", &(iptr[i]));
        sum = sum + iptr[i];
    }*/
    printf("enter %d numbers\n", n);
    for(i=0, temp=iptr; i<n; i++, temp++) {
        printf("enter %d\t", i);
        scanf("%d", temp);
        sum = sum + *temp;
    }
    printf("Sum : %d\n", sum);
    
    free(iptr);
    return 0;
}
