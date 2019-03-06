#include <stdio.h>

int main(void) {
        int product,number,i;
        printf("enter a number");
        scanf("%d", &number);
        
        for(i = 1; i <= 10; ++i) {
                product=i*number;
                printf("%d x %d = %d\n", i,number,product);
        }
        return 0;
}
