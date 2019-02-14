#include <stdio.h>

int main(void) {
    char shallWe=0;
    printf("shall we play a game ?");
    scanf("%c", &shallWe);
    
    if ( shallWe=='Y'||shallWe=='y'|| shallWe=='k') {
        printf("awesome, i love playing a good game");
    
    }
        else
        if(shallWe== 'K') {
           printf("really ? cool");
        }
        else
           printf("Sorry...I thought you liked games...");

	return 0;
}
