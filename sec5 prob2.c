#include <stdio.h>

int sumOfDigits(int n) {
    int sum;
    while (n >= 10) {
        sum = 0;
        while (n > 0) {
            sum += n % 10; 
            n /= 10;       
        }
        n = sum; 
    }
    return n; 
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sumOfDigits(number);
    printf("The sum of digits until a single digit is: %d\n", result);
    
    return 0;
}
