#include <stdio.h>

int main(void) {
    
    char hungry ='y';
    int burgerinbelly=0;
    printf("welcome to hunger games...I see you are hungry\n\n\n");
    
    while (hungry=='y') {
        printf("here is a burger..eat it !!\n\n");
        burgerinbelly=burgerinbelly+1;
        printf("are you still hungry ??..enter y for Yes. press any other key for no\n\n");
        scanf("\n%c", &hungry);
    }
    printf("phew....I am glad that you are full\n");
    printf("You have %d burgers in your belly\n\n", burgerinbelly);
        
    return 0;
    }
    
