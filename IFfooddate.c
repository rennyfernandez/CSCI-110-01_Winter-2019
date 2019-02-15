#include <stdio.h>
#include <string.h>

int main(void) {
    
    char myfav[6] = "pizza";
    char urfav[50];
    
    printf("Hi...my favorite food is %s\n\n", myfav);
    printf("whats your favorite food ?\n\n");
    scanf("%s", urfav);
    
    
    if (strcmp(myfav, urfav) == 0) {
    printf("Really ?? Wow...can we share a 16 inch pizza ?\n\n");
    }
    else printf("Sorry..our priorities dont match.\n\n"); 
    
    return 0;
}
