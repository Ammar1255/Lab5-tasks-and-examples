#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1; 
        n >>= 1;        
    }
    return count;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = countOnes(number);
    printf("Number of 1s in the binary representation of %d: %d\n", number, result);
    
    return 0;
}
