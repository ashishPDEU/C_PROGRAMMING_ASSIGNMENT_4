#include <stdio.h>
int isLeap(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
int main() {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if(isLeap(y))
        printf("%d is a leap year.\n", y);
    else
        printf("%d is not a leap year.\n", y);
    return 0;
}
