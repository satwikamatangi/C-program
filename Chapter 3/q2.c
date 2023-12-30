#include<stdio.h>

int main() {
    int num;

    printf("Enter any integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even Number\n", num);
    } else if (num % 2 != 0) {
        printf("%d is Odd Number\n", num);
    } else {
        printf("%d is neither even nor odd\n", num);
    }

    return 0;
}
