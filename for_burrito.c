#include <stdio.h>

int main(void) {
    
    int howmany, burrito, cheese;
    char extracheese;
    
    printf("how many burritos do you want ?\n");
    scanf("%d",&howmany);
    
    for(burrito=1; burrito<howmany; burrito++) {
        
        printf("do you want extracheese ?\n");
        scanf(" %c",&extracheese);
        if(extracheese=='y') {
            for(cheese=1; cheese<3; cheese++) {
                printf("burrito no %d has been added with %d portion of cheese\n", burrito, cheese);
            }
        }
        else {
            printf("Burrito no %d is ready with no extracheese", burrito);
        }
    }
    return 0;

}
