#include <stdio.h>
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Add: %d\n", add(a,b));
    printf("Subtract: %d\n", subtract(a,b));
    printf("Multiply: %d\n", multiply(a,b));
    if(b != 0)
        printf("Divide: %.2f\n", divide(a,b));
    else
        printf("Cannot divide by zero\n");
    return 0;
}
