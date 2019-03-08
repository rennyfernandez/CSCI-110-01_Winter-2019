#include <stdio.h>

int main(void) {

int a[10];
int x,i;
int rand1;

while(x!=4) {

printf("\n\n1. populate arrays with 0\n");
printf("2. populate arrays with random numbers\n");
printf("3. populate arrays with 10\n");
scanf("%d", &x);

if(x==1) {
    for(i=0; i<10; i++) {
    a[i]=0;
    printf("%d\t", a[i]);
    }
}
if(x==2) {
    for(i=0; i<10; i++) {
    //srand(time(0));//generates random number every execution
    rand1= ((rand() % 60) + 1);// random number between 1 and 6000
    a[i]=rand1;
    printf("%d ", a[i]);
    }
}
if(x==3) {
    for(i=0; i<10; i++) {
    a[i]=10;
    printf("%d", a[i]);
    }
}

if(x==4) {
    printf("bye bye");
    break;
}
}
return 0;
}
