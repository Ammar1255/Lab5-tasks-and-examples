#include <stdio.h>

int is_eligible_for_loan(int age, float income, int credit_score) {
    
    if (age >= 18 && income >= 30000 && credit_score >= 650) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int age;
    float income;
    int credit_score;

    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%f", &income);
    printf("Enter your credit score: ");
    scanf("%d", &credit_score);


    if (is_eligible_for_loan(age, income, credit_score)) {
        printf("Congratulations! You are eligible for a loan.\n");
    } else {
        printf("Sorry, you are not eligible for a loan.\n");
    }

    return 0; 
}
