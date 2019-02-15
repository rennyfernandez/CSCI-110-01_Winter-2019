#include < stdio.h >

  int main(void) {

    int noofpeople;
    printf(" how many are in your team ?");
    scanf("%d", & noofpeople);
    if (noofpeople > 10) {
      printf("please go the conference room \n\n");
    } else if (noofpeople > 2 && noofpeople < 10) {
      printf("please go to the booth \n\n");
    }
    if (noofpeople <= 2) {
      printf("Sorry you are not allowed here..This is a party place\n\n");
    }
    return 0;
  }
