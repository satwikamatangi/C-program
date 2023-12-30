#include <stdio.h>

int dayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int dayOfWeek = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    return dayOfWeek;
}

int main() {
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    int day = dayOfWeek(year, 1, 1);

    if (day != -1) {
        printf("On 1st January %d, it is ", year);
        switch (day) {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    } else {
        printf("Error calculating day of the week.\n");
    }

    return 0;
}
