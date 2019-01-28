#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number(x): ");
    scanf("%lf", &base);

    printf("Enter the power raised(y): ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf(" x^y = %.1lf^%.1lf = %.2lf", base, power, result);  
    /* compile using (gcc filename.c -lm) and (./a.out)*/

    return 0;
}
