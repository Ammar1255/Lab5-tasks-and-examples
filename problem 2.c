#include <stdio.h>

int main() {
    float attendance, assignments, exam, finalGrade;
    
    printf("Enter attendance percentage (0-100): ");
    scanf("%f", &attendance);
    
    printf("Enter average assignment score (0-100): ");
    scanf("%f", &assignments);
    
    printf("Enter exam score (0-100): ");
    scanf("%f", &exam);
    
    if (attendance >= 75) { 
        if (assignments >= 50) { 
            if (exam >= 60){
                finalGrade = 4.0; 
            } else {
                finalGrade = 3.0; 
            }
        } else {
            if (exam >= 60) {
                finalGrade = 2.0; 
            } else {
                finalGrade = 1.0; 
            }
        }
    } else {
        finalGrade = 0.0; 
    }

    
    printf("The final grade is: %.1f\n", finalGrade);

    return 0;
}
