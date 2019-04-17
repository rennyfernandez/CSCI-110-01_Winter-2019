#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
  // integer variables
  int N = 0;
  int sum = 0;
  int i;
  
  // integer pointer variables
  int *iptr =NULL;
  
  // take user input
  printf("Enter value of N [1-10]: ");
  scanf("%d", &N);
  
  // allocate memory
  iptr = (int *) malloc (N * sizeof(int));
  
   // take integers
  printf("Enter %d integer number(s)\n", N);
  for (i = 0;  i < N; i++) {
    printf("Enter #%d: ", i);
    scanf("%d", &(iptr[i]));
    // compute the sum
    sum = sum+(iptr[i]);
  }
  
  // display result
  printf("Sum: %d\n", sum);
  
  // free memory location
  free(iptr);

  return 0;
}
