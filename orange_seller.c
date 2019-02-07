int main(void) {
    
    int orangesNum;
    double totalCrates,crates=16;
    
    
    printf(" Hi.I am the orange seller. How many oranges do you want ?");
    scanf("%d", &orangesNum);
    
    printf(" oh %d oranges?? thats a lot !\n\n", orangesNum);
    printf("Anyway I sell crates of oranges. Each crate has 16 oranges\n");
    
    totalCrates= (double)(orangesNum/crates);
    printf("You need to buy %0.1lf crates to get %d oranges\n\n", ceil(totalCrates), orangesNum);
    
    return 0;
    
}
