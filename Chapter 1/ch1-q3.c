#include <stdio.h>

int main() {
    const int maxMarksPerSubject = 100;
    int marksSubject1, marksSubject2, marksSubject3, marksSubject4, marksSubject5;

    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%d", &marksSubject1);

    printf("Enter marks for Subject 2 (out of 100): ");
    scanf("%d", &marksSubject2);

    printf("Enter marks for Subject 3 (out of 100): ");
    scanf("%d", &marksSubject3);

    printf("Enter marks for Subject 4 (out of 100): ");
    scanf("%d", &marksSubject4);

    printf("Enter marks for Subject 5 (out of 100): ");
    scanf("%d", &marksSubject5);
    int totalMarks = marksSubject1 + marksSubject2 + marksSubject3 + marksSubject4 + marksSubject5;

    
    float percentage = ((float)totalMarks / (500)) * 100;

   
    printf("\nAggregate Marks: %d\n", totalMarks);
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
