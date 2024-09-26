#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int greatest;

    
    if (a >= b) {
        if (a >= c) {
            greatest = a;
        } else {
            greatest = c; 
        }
    } else {
        if (b >= c) {
            greatest = b; 
        } else {
            greatest = c; 
        }
    }

    
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
