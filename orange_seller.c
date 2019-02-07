#include <stdio.h>
#include <math.h>

int main(void) {
    
    int oranges;
    double totalCrates,crates=16;
    
    
    printf(" Hi.I am an orange seller. WHow many oranges do you want ?");
    scanf("%d", &oranges);
    
    printf(" oh %d oranges?? thats a lot !\n\n", oranges);
    printf("Anyway I sell crates of oranges. Each crate has 16 oranges\n");
    
    totalCrates= (double)(oranges/crates);
    printf("You need to buy %0.1lf crates to get %d oranges\n\n", ceil(totalCrates), oranges);
    
    return 0;
    
    
}
