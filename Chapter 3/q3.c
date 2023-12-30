#include<stdio.h>

int main() {
    int num;

    printf("Enter any year: ");
    scanf("%d", &num);

    if (num % 4 == 0) {
        printf("%d is leap year\n", num);
    } else{
        printf("%d is not a leap year\n", num);
    } 

    return 0;
}