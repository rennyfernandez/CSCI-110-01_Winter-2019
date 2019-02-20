#include<stdio.h>

int main(void) {
    
    int life=100; 
    int doughnut;
    int apple;
    
    printf("do you want a doughnut ?\n\n\n");
    scanf("%d", &doughnut);
    
    if(doughnut==1) {
        printf("you ate a doughnut and got 10 life\n\n\n");
        life=life+10;
        printf("you life is now %d\n\n\n", life);
    }
    
    else {
    printf("you chose not to eat the doughnut..you life is still 100\n\n\n");
    printf("you life is %d\n\n\n", life);
    }
    
    printf("do you want an apple ?");
    scanf("%d", &apple);
    
    if (apple==1) {
        printf("eating an apple will increase your life time by 25\n\n\n");
        life=life+25;
    }
    
    printf("your life is now %d", life);
    return 0;
}
