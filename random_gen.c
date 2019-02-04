#include<stdio.h>
#include<stdlib.h>

int main() {
    int rand1;
    srand(time(0));/generates random number every execution
    rand1= ((rand() % 6000) + 1);// random number between 1 and 6000
    printf("the random number is %d\n", rand1);

return(0);
}

