#include <stdio.h>

int main(void) {
    int howmany;
    
    printf("how many in your group\n\n");
    scanf("%d", &howmany);
    
    switch(howmany) {
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        printf("take our conference room\n\n");
        break;
        
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        printf("take the booth\n\n\n");
        break;
        
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        printf("take the tables\n\n\n");
        break;
    }
    return 0;
}
