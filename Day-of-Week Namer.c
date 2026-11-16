#include <stdio.h>

int main() {
    int days;


    printf("Enter a number(1-7): ");
    scanf("%d", &days);

    switch (days) {
        case 1:
            printf("Day 1 is Monday");
            break;

        case 2:
            printf("Day 2 is Tuesday");
            break;

        case 3:
            printf("Day 3 is Wednesday");
            break;

        case 4:
            printf("Day 4 is Thursday");
            break;

        case 5:
            printf("Day 5 is Friday");
            break;

        case 6:
            printf("Day 6 is Saturday");
            break;

        case 7:
            printf("Day 1 is Sunday");
            break;

    
        default:
            printf("Invalid number!");
            break;
    }

    return 0;
}
