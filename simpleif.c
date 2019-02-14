#include <stdio.h>

int main(void) {
    char shallWe=0;
    printf("shall we play a game ? enter Y for yes"); 
    scanf("%c", &shallWe); //store the value of shallWe
    
    if ( shallWe=='Y') { //checking if the value stored in 'shallWe is 'Y'
        printf("awesome, i love playing a good game"); 
    
    }
        else
           printf("Sorry...I thought you liked games...");

	return 0;
}
