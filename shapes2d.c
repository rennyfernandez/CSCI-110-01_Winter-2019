/*                                                                                                                     
  Name: Student name
  Date: MM/DD/2019
  Desc: Summation example-1
  To compile , type this, gcc filename.c
  To compile , type this, ./a.out
*/
#include<stdio.h>

int main(void) {
    float a,b,h;
    printf("....................\n");
    printf("Shape : Triangle\n");
    
    printf("enter b \n");
    scanf("%f",&b);
    
    printf("enter h \n");
    scanf("%f",&h);
    printf("\n");
    a=0.5*b*h;
    printf("the area of the triangle is %f cm \n\n\n\n", a);
    
    return 0;
}
