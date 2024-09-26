#include <stdio.h>

void swapNumbers(int *a, int *b) {
    printf("Before swapping: a = %d, b = %d\n", *a, *b);
    

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;

    printf("After swapping: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    swapNumbers(&a, &b);
    
    return 0;
}
