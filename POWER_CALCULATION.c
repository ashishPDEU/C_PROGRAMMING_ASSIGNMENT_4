#include <stdio.h>
int power(int a, int b) {
    int result = 1;
    for(int i = 0; i < b; i++)
        result *= a;
    return result;
}
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d raised to %d = %d\n", base, exp, power(base, exp));
    return 0;
}
